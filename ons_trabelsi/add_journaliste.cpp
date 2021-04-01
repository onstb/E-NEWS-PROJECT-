#include "add_journaliste.h"
#include "ui_add_journaliste.h"

add_journaliste::add_journaliste(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_journaliste)
{
    ui->setupUi(this);
}

add_journaliste::~add_journaliste()
{
    delete ui;
}

//configuration ok et cancel
void add_journaliste::on_buttonBox_accepted()
{
    accept();
}

void add_journaliste::on_buttonBox_rejected()
{
    reject();
}

//get form content
QString add_journaliste::specialite() const { //combo box

    return ui->specialite->currentText();
}

QString add_journaliste::id() const { //line edit

    return ui->id->text();
}

QString add_journaliste::nom() const { //line edit

    return ui->nom->text();
}

//remplissage des champs du formulaire a partir de la base

void add_journaliste::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from JOURNALISTES where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->nom->setText(query.value(1).toString()); //line edit
   ui->specialite->setCurrentText(query.value(2).toString()); //combobox
   ui->nb_articles->setText(query.value(3).toString()); //line edit

    }

}
