#ifndef PUBLICITE_H
#define PUBLICITE_H

#include <QSqlQuery>
#include <QSqlQueryModel>

class publicite
{
public:
    publicite();
    publicite(QString,QString,double,QString);

    bool ajouter();
    bool modifier(QString);
     QSqlQueryModel * afficher();
      bool supprimer(QString);


    QString id,type,sponsor;
    double cout;

};

#endif // PUBLICITE_H
