#ifndef ADD_SPONSOR_H
#define ADD_SPONSOR_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_sponsor;
}

class add_sponsor : public QDialog
{
    Q_OBJECT

public:
    explicit add_sponsor(QWidget *parent = nullptr);
    ~add_sponsor();

    QString prenom() const;
    QString nom() const;
    QString id() const ;

    void fill_form(QString);


private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_sponsor *ui;
};

#endif // ADD_SPONSOR_H
