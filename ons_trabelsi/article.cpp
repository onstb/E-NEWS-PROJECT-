#include "article.h"

article::article()
{

}

article::article(QString s1,QString s2,QString s3){

    id=s1;
    categorie=s2;
    journaliste=s3;


}


bool article::ajouter(){

    QSqlQuery query;


    query.prepare("INSERT INTO ARTICLES (ID,TYPE,JOURNALISTE) VALUES (:id,:type,:journaliste)");

    query.bindValue(":id", id);
    query.bindValue(":type",categorie);
    query.bindValue(":journaliste",journaliste);

    return    query.exec();

}

bool article::modifier(QString selected){

    QSqlQuery query;


    query.prepare(" UPDATE ARTICLES SET  TYPE=:type, JOURNALISTE=:journaliste"
                  " where ID= :id");
    query.bindValue(":id", selected);
    query.bindValue(":type",categorie);
    query.bindValue(":journaliste",journaliste);



    return    query.exec();

}

 QSqlQueryModel * article::afficher(){

     QSqlQueryModel * modal=new QSqlQueryModel();
     modal->setQuery("SELECT * FROM ARTICLES");

     return modal;

 }
  bool article::supprimer(QString selected){

      QSqlQuery query;
      query.prepare("Delete from ARTICLES where ID = :id ");
      query.bindValue(":id", selected);
      return    query.exec();


  }

  void article::count_articles(){

      vector<QString> liste_journalistes;
      QSqlQuery q1,q2,q3;
      int c;
      q1.prepare("SELECT * FROM JOURNALISTES");
      q1.exec();
      while (q1.next()){
          liste_journalistes.push_back(q1.value(1).toString());
      }


      for (auto i = liste_journalistes.begin(); i != liste_journalistes.end(); ++i) {
           q2.prepare("SELECT * FROM ARTICLES where JOURNALISTE=:j ");
           q2.bindValue(":j", *i);
           q2.exec();
           c=0;
           while (q2.next()){c++;}


           q3.prepare(" UPDATE JOURNALISTES SET NB_ARTICLE= :nb_article where NOM= :journaliste");
           q3.bindValue(":nb_article", c);
           q3.bindValue(":journaliste",*i);
           q3.exec();

      }


  }

