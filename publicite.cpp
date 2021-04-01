#include "publicite.h"

publicite::publicite()
{

}

publicite::publicite(QString s1,QString s2,double x,QString s3){

    id=s1;
    type=s2;
    sponsor=s3;
    cout=x;
}


bool publicite::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO PUBLICITE VALUES (:id,:type,:cout,:sponsor)");

    query.bindValue(":id", id);
    query.bindValue(":type",type);
    query.bindValue(":sponsor",sponsor);
    query.bindValue(":cout",cout);



    return    query.exec();

}

bool publicite::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE PUBLICITE SET  TYPE=:type, SPONSOR=:sponsor ,COUT= :cout"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":type",type);
    query.bindValue(":sponsor",sponsor);
    query.bindValue(":cout",cout);



    return    query.exec();

}

 QSqlQueryModel * publicite::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM PUBLICITE");

     return modal;

 }
  bool publicite::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from PUBLICITE where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }

