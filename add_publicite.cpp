#include "add_publicite.h"
#include "ui_add_publicite.h"

add_publicite::add_publicite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_publicite)
{
    ui->setupUi(this);

    //fill sponsor combobox
    get_sponsor();
}

add_publicite::~add_publicite()
{
    delete ui;
}

//configurer ok et cancel
void add_publicite::on_buttonBox_accepted()
{
    accept();
}

void add_publicite::on_buttonBox_rejected()
{
    reject();
}

//get form content
QString add_publicite::type() const { //combo box

    return ui->type->currentText();
}

double add_publicite::cout() const{ //float

    return ui->cout->value();
}


QString add_publicite::sponsor() const { //combo box

    return ui->sponsor->currentText();
}

QString add_publicite::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void add_publicite::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from SPONSOR where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->type->setCurrentText(query.value(1).toString()); //combobox
   ui->cout->setValue(query.value(2).toReal()); // reel
   ui->sponsor->setCurrentText(query.value(3).toString()); //combobox

    }

}

//remplissage du combobox des journaliste a partir de la base
void add_publicite::get_sponsor(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select ID from SPONSOR");
    query.exec();
    modal->setQuery(query);
    ui->sponsor->setModel(modal);


}
