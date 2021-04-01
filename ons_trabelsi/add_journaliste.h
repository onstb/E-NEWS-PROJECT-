#ifndef ADD_JOURNALISTE_H
#define ADD_JOURNALISTE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_journaliste;
}

class add_journaliste : public QDialog
{
    Q_OBJECT

public:
    explicit add_journaliste(QWidget *parent = nullptr);
    ~add_journaliste();

    QString specialite() const;
    QString nom() const;
    QString id() const ;

    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_journaliste *ui;
};

#endif // ADD_JOURNALISTE_H
