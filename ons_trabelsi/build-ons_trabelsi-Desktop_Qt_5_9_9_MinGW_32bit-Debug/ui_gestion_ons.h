/********************************************************************************
** Form generated from reading UI file 'gestion_ons.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ONS_H
#define UI_GESTION_ONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_ons
{
public:
    QAction *actionadd_article;
    QAction *actiondelete_article;
    QAction *actionadd_journaliste;
    QAction *actiondelete_journaliste;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *rech_journaliste;
    QTableView *table_journaliste;
    QLabel *label;
    QComboBox *journaliste_sel_col;
    QPushButton *pushButton;
    QWidget *tab_2;
    QTableView *table_article;
    QLabel *label_4;
    QLineEdit *rech_article;
    QComboBox *article_sel_col;
    QPushButton *stat;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_ons)
    {
        if (gestion_ons->objectName().isEmpty())
            gestion_ons->setObjectName(QStringLiteral("gestion_ons"));
        gestion_ons->resize(743, 529);
        actionadd_article = new QAction(gestion_ons);
        actionadd_article->setObjectName(QStringLiteral("actionadd_article"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_article->setIcon(icon);
        actiondelete_article = new QAction(gestion_ons);
        actiondelete_article->setObjectName(QStringLiteral("actiondelete_article"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_article->setIcon(icon1);
        actionadd_journaliste = new QAction(gestion_ons);
        actionadd_journaliste->setObjectName(QStringLiteral("actionadd_journaliste"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/img/user-add-icon---shine-set-add-new-user-add-user-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_journaliste->setIcon(icon2);
        actiondelete_journaliste = new QAction(gestion_ons);
        actiondelete_journaliste->setObjectName(QStringLiteral("actiondelete_journaliste"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_journaliste->setIcon(icon3);
        centralwidget = new QWidget(gestion_ons);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 711, 461));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        rech_journaliste = new QLineEdit(tab);
        rech_journaliste->setObjectName(QStringLiteral("rech_journaliste"));
        rech_journaliste->setGeometry(QRect(430, 30, 151, 24));
        rech_journaliste->setClearButtonEnabled(true);
        table_journaliste = new QTableView(tab);
        table_journaliste->setObjectName(QStringLiteral("table_journaliste"));
        table_journaliste->setGeometry(QRect(20, 71, 651, 331));
        table_journaliste->setStyleSheet(QStringLiteral(""));
        table_journaliste->setSortingEnabled(true);
        table_journaliste->horizontalHeader()->setCascadingSectionResizes(true);
        table_journaliste->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_journaliste->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 251, 31));
        journaliste_sel_col = new QComboBox(tab);
        journaliste_sel_col->setObjectName(QStringLiteral("journaliste_sel_col"));
        journaliste_sel_col->setGeometry(QRect(591, 30, 81, 22));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 410, 371, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_article = new QTableView(tab_2);
        table_article->setObjectName(QStringLiteral("table_article"));
        table_article->setGeometry(QRect(10, 70, 651, 341));
        table_article->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_article->setSortingEnabled(true);
        table_article->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 20, 211, 31));
        rech_article = new QLineEdit(tab_2);
        rech_article->setObjectName(QStringLiteral("rech_article"));
        rech_article->setGeometry(QRect(430, 30, 141, 24));
        rech_article->setClearButtonEnabled(true);
        article_sel_col = new QComboBox(tab_2);
        article_sel_col->setObjectName(QStringLiteral("article_sel_col"));
        article_sel_col->setGeometry(QRect(580, 30, 81, 22));
        stat = new QPushButton(tab_2);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(400, 30, 24, 24));
        stat->setStyleSheet(QStringLiteral("background-image: url(:/res/img/unnamed.png);"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 420, 281, 23));
        tabWidget->addTab(tab_2, QString());
        gestion_ons->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_ons);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 743, 22));
        gestion_ons->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_ons);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_ons->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_ons);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        gestion_ons->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_article);
        toolBar->addAction(actiondelete_article);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionadd_journaliste);
        toolBar->addAction(actiondelete_journaliste);

        retranslateUi(gestion_ons);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_ons);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_ons)
    {
        gestion_ons->setWindowTitle(QApplication::translate("gestion_ons", "MainWindow", Q_NULLPTR));
        actionadd_article->setText(QApplication::translate("gestion_ons", "add_article", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_article->setShortcut(QApplication::translate("gestion_ons", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_article->setText(QApplication::translate("gestion_ons", "delete_article", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_article->setShortcut(QApplication::translate("gestion_ons", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionadd_journaliste->setText(QApplication::translate("gestion_ons", "add_journaliste", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_journaliste->setShortcut(QApplication::translate("gestion_ons", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_journaliste->setText(QApplication::translate("gestion_ons", "delete_journaliste", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_journaliste->setShortcut(QApplication::translate("gestion_ons", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        rech_journaliste->setPlaceholderText(QApplication::translate("gestion_ons", "Recherche", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_ons", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Journalistes</span></p></body></html>", Q_NULLPTR));
        journaliste_sel_col->clear();
        journaliste_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_ons", "All", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Specialite", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Nb Articles", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("gestion_ons", "Export Excel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_ons", "Journalistes", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_ons", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Gestion Articles</span></p></body></html>", Q_NULLPTR));
        rech_article->setPlaceholderText(QApplication::translate("gestion_ons", "Recherche", Q_NULLPTR));
        article_sel_col->clear();
        article_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_ons", "All", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_ons", "Journaliste", Q_NULLPTR)
        );
        stat->setText(QString());
        pushButton_2->setText(QApplication::translate("gestion_ons", "Imprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_ons", "Articles", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_ons", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_ons: public Ui_gestion_ons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ONS_H
