#include "add_sponsor.h"
#include "ui_add_sponsor.h"

add_sponsor::add_sponsor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_sponsor)
{
    ui->setupUi(this);
}

add_sponsor::~add_sponsor()
{
    delete ui;
}

//configurer ok et cancel
void add_sponsor::on_buttonBox_accepted()
{
    accept();
}

void add_sponsor::on_buttonBox_rejected()
{
    reject();
}

//get form content
QString add_sponsor::prenom() const { //combo box

    return ui->prenom->text();
}

QString add_sponsor::id() const { //line edit

    return ui->id->text();
}

QString add_sponsor::nom() const { //line edit

    return ui->nom->text();
}

//remplissage des champs du formulaire a partir de la base

void add_sponsor::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from SPONSOR where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->nom->setText(query.value(1).toString()); //line edit
   ui->prenom->setText(query.value(2).toString()); //line edit

    }

}
