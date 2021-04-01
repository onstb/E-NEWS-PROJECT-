#ifndef GESTION_ONS_H
#define GESTION_ONS_H

#include <QMainWindow>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>

#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QTextDocument>
#include <QPrintDialog>
#include <QTextStream>


#include "article.h"
#include "add_article.h"
#include "journaliste.h"
#include "add_journaliste.h"
#include "exportexcelobject.h"
#include "stat_type.h"



namespace Ui {
class gestion_ons;
}

class gestion_ons : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_ons(QWidget *parent = nullptr);
    ~gestion_ons();

    journaliste tmp_journaliste;
    article tmp_article;
    QSortFilterProxyModel *proxy_journaliste,*proxy_article;
    void show_article();
    void show_journaliste();
    void show_tables();

private slots:
    void on_actionadd_journaliste_triggered();

    void on_table_journaliste_clicked(const QModelIndex &index);

    void on_table_journaliste_doubleClicked(const QModelIndex &index);

    void on_actiondelete_journaliste_triggered();

    void on_journaliste_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_journaliste_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_actionadd_article_triggered();

    void on_table_article_clicked(const QModelIndex &index);

    void on_table_article_doubleClicked(const QModelIndex &index);

    void on_actiondelete_article_triggered();

    void on_article_sel_col_currentIndexChanged(const QString &arg1);

    void on_rech_article_textChanged(const QString &arg1);

    void on_stat_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::gestion_ons *ui;
    QString selected_journaliste="",selected_article="";
    int sel_col_journaliste=-1,sel_col_article=-1;
    stat_type *s;

};

#endif // GESTION_ONS_H
