#include "sponsor.h"

sponsor::sponsor()
{

}

sponsor::sponsor(QString s1,QString s2,QString s3){

    id=s1;
    nom=s2;
    prenom=s3;
}


bool sponsor::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO SPONSOR VALUES (:id,:nom,:prenom)");

    query.bindValue(":id", id);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);



    return    query.exec();

}

bool sponsor::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE SPONSOR SET  NOM=:nom, PRENOM=:prenom "
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);



    return    query.exec();

}

 QSqlQueryModel * sponsor::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM SPONSOR");

     return modal;

 }
  bool sponsor::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from SPONSOR where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }

