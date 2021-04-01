#include "add_article.h"
#include "ui_add_article.h"

add_article::add_article(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_article)
{
    ui->setupUi(this);
    get_journaliste();
}

add_article::~add_article()
{
    delete ui;
}

//configurer ok et cancel
void add_article::on_buttonBox_accepted()
{
    accept();
}

void add_article::on_buttonBox_rejected()
{
    reject();
}

//get form content
QString add_article::type() const { //combo box

    return ui->type->currentText();
}

QString add_article::journaliste() const { //combo box

    return ui->journaliste->currentText();
}

QString add_article::id() const { //line edit

    return ui->id->text();
}

//remplissage des champs du formulaire a partir de la base

void add_article::fill_form(QString selected ) {
    QSqlQuery query;
    query.prepare("select * from ARTICLES where ID= :id");
    query.bindValue(":id", selected);
    query.exec();
    while(query.next()){
  ui->id->setText(query.value(0).toString()); //line edit
   ui->type->setCurrentText(query.value(1).toString()); //combobox
   ui->journaliste->setCurrentText(query.value(2).toString()); //combobox

    }

}

//remplissage du combobox des journaliste a partir de la base
void add_article::get_journaliste(){
    QSqlQuery query;
    QSqlQueryModel * modal=new QSqlQueryModel();
    query.prepare("select NOM from JOURNALISTES");
    query.exec();
    modal->setQuery(query);
    ui->journaliste->setModel(modal);


}
