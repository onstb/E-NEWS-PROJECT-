#ifndef SPONSOR_H
#define SPONSOR_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class sponsor
{
public:
    sponsor();
    sponsor(QString,QString,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);


    QString id,nom,prenom;
};

#endif // SPONSOR_H
