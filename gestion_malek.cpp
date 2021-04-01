#include "gestion_malek.h"
#include "ui_gestion_malek.h"

gestion_malek::gestion_malek(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_malek)
{
    ui->setupUi(this);

    //show database content
    show_tables();

    //for email tab
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));

}

gestion_malek::~gestion_malek()
{
    delete ui;
}

void gestion_malek::show_tables()
{
    show_publicite();
    show_sponsor();
}

/*********************************** sponsor ****************************/

//************************ crud

//ajout
void gestion_malek::on_actionadd_sponsor_triggered()
{
    //creation instance
        add_sponsor ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.nom();
        QString s3=ac.prenom();


        //ajout
        sponsor mc(s1,s2,s3);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_sponsor();
}

//selection
void gestion_malek::on_table_sponsor_clicked(const QModelIndex &index)
{
    selected_sponsor=ui->table_sponsor->model()->data(index).toString();
}

//modification
void gestion_malek::on_table_sponsor_doubleClicked(const QModelIndex &index)
{
    add_sponsor ac(this);

  ac.fill_form(selected_sponsor);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
    QString s2=ac.nom();
    QString s3=ac.prenom();


    //mofication
    sponsor mc(selected_sponsor,s2,s3);
    mc.modifier(selected_sponsor);

    //refresh du tableau (affichage)
      show_sponsor();
}

//suppression
void gestion_malek::on_actiondelete_sponsor_triggered()
{
    sponsor mc;
  mc.supprimer(selected_sponsor);

 //refresh du tableau (affichage)
   show_sponsor();
}

//affichage
void gestion_malek::show_sponsor()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_sponsor = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_sponsor->setSourceModel(tmp_sponsor.afficher());

     //pour la recherche
        proxy_sponsor->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_sponsor->setModel(proxy_sponsor);
}

//************************ metiers


//recherche dynamique
void gestion_malek::on_sponsor_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_sponsor=ui->sponsor_sel_col->currentIndex()-1;
    proxy_sponsor->setFilterKeyColumn(sel_col_sponsor); // chercher dans tout le tableau (-1) ou donner le numero de la colone
}
void gestion_malek::on_rech_sponsor_textChanged(const QString &arg1)
{
    proxy_sponsor->setFilterFixedString(arg1);
}

//mailing
void  gestion_malek::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   gestion_malek::sendMail()
{
    Smtp* smtp = new Smtp("mohamedaziz.benhaha@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("mohamedaziz.benhaha@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("mohamedaziz.benhaha@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   gestion_malek::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}


/*********************************** publicite ****************************/

//************************ crud

//ajout

void gestion_malek::on_actionadd_publicite_triggered()
{
    //creation instance
        add_publicite ac(this);

        //ouvrir dialog
        int res=ac.exec();
        if (res == QDialog::Rejected )
            return;

      //recuperation des donnees
        QString s1=ac.id();
        QString s2=ac.type();
        QString s3=ac.sponsor();
        double x=ac.cout();


        //ajout
        publicite mc(s1,s2,x,s3);
        mc.ajouter();

        //refresh du tableau (affichage)
          show_publicite();
}

//selection
void gestion_malek::on_table_publicite_clicked(const QModelIndex &index)
{
    selected_publicite=ui->table_publicite->model()->data(index).toString();
}

//modification
void gestion_malek::on_table_publicite_doubleClicked(const QModelIndex &index)
{
    add_publicite ac(this);

  ac.fill_form(selected_publicite);
  int res=ac.exec();
  if (res == QDialog::Rejected )
    return;


  //recuperation des donnees
    QString s2=ac.type();
    QString s3=ac.sponsor();
    double x=ac.cout();


    //mofication
    publicite mc(selected_publicite,s2,x,s3);
    mc.modifier(selected_publicite);

    //refresh du tableau (affichage)
      show_publicite();

}

//suppression
void gestion_malek::on_actiondelete_publicite_triggered()
{
    publicite mc;
  mc.supprimer(selected_publicite);

 //refresh du tableau (affichage)
   show_publicite();
}

//affichage
void gestion_malek::show_publicite()
{
    //creation model (masque du tableau) : permet recherche et tri
        proxy_publicite = new QSortFilterProxyModel();

     //definir la source (tableau original)
        proxy_publicite->setSourceModel(tmp_publicite.afficher());

     //pour la recherche
        proxy_publicite->setFilterCaseSensitivity(Qt::CaseInsensitive); // S=s (pas de difference entre majiscule et miniscule)

        //remplissage tableau avec le masque
        ui->table_publicite->setModel(proxy_publicite);
}

//************************ metiers

//recherche dynamique
void gestion_malek::on_publicite_sel_col_currentIndexChanged(const QString &arg1)
{
    sel_col_publicite=ui->publicite_sel_col->currentIndex()-1;
    proxy_publicite->setFilterKeyColumn(sel_col_publicite); // chercher dans tout le tableau (-1) ou donner le numero de la colone

}
void gestion_malek::on_rech_publicite_textChanged(const QString &arg1)
{
    proxy_publicite->setFilterFixedString(arg1);
}

//stat
void gestion_malek::on_stat_clicked()
{
    s = new stat_publicite();

  s->setWindowTitle("statistique");
  s->choix_pie();
  s->show();

}

