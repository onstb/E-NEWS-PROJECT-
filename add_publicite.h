#ifndef ADD_PUBLICITE_H
#define ADD_PUBLICITE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_publicite;
}

class add_publicite : public QDialog
{
    Q_OBJECT

public:
    explicit add_publicite(QWidget *parent = nullptr);
    ~add_publicite();

    double cout() const;
    QString sponsor() const;
    QString type() const;
    QString id() const ;

    void get_sponsor();
    void fill_form(QString);
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();
private:
    Ui::add_publicite *ui;
};

#endif // ADD_PUBLICITE_H
