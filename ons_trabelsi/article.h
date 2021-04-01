#ifndef ARTICLE_H
#define ARTICLE_H

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <iostream>
#include <vector>
using namespace std;
class article
{
public:
    article();
    article(QString,QString,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);
      void count_articles();


    QString id,categorie,journaliste;
};

#endif // ARTICLE_H
