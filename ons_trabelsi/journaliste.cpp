#include "journaliste.h"

journaliste::journaliste()
{

}

journaliste::journaliste(QString s1,QString s2,QString s3){

    id=s1;
    nom=s2;
    specialite=s3;

}


bool journaliste::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO JOURNALISTES (ID,NOM,SPECIALITE) VALUES (:id,:nom,:specialite)");

    query.bindValue(":id", id);
    query.bindValue(":nom",nom);
    query.bindValue(":specialite",specialite);

    return    query.exec();

}

bool journaliste::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE JOURNALISTES SET NOM= :nom, SPECIALITE=:specialite"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":nom",nom);
    query.bindValue(":specialite",specialite);




    return    query.exec();

}

 QSqlQueryModel * journaliste::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM JOURNALISTES");

     return modal;

 }
  bool journaliste::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from JOURNALISTES where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }
