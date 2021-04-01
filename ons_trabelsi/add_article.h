#ifndef ADD_ARTICLE_H
#define ADD_ARTICLE_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class add_article;
}

class add_article : public QDialog
{
    Q_OBJECT

public:
    explicit add_article(QWidget *parent = nullptr);
    ~add_article();

    QString journaliste() const;
    QString type() const;
    QString id() const ;

    void get_journaliste();
    void fill_form(QString);

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::add_article *ui;
};

#endif // ADD_ARTICLE_H
