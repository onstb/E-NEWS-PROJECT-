/********************************************************************************
** Form generated from reading UI file 'gestion_malek.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_MALEK_H
#define UI_GESTION_MALEK_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_malek
{
public:
    QAction *actionadd_publicite;
    QAction *actiondelete_publicite;
    QAction *actionadd_sponsor;
    QAction *actiondelete_sponsor;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *table_publicite;
    QLabel *label;
    QComboBox *publicite_sel_col;
    QLineEdit *rech_publicite;
    QPushButton *stat;
    QWidget *tab_2;
    QTableView *table_sponsor;
    QLabel *label_4;
    QComboBox *sponsor_sel_col;
    QLineEdit *rech_sponsor;
    QWidget *tab_5;
    QLineEdit *rcpt;
    QLineEdit *file;
    QPushButton *sendBtn;
    QLineEdit *subject;
    QLineEdit *mail_pass;
    QTextEdit *msg;
    QPushButton *browseBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *gestion_malek)
    {
        if (gestion_malek->objectName().isEmpty())
            gestion_malek->setObjectName(QStringLiteral("gestion_malek"));
        gestion_malek->resize(737, 539);
        actionadd_publicite = new QAction(gestion_malek);
        actionadd_publicite->setObjectName(QStringLiteral("actionadd_publicite"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/res/img/Add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_publicite->setIcon(icon);
        actiondelete_publicite = new QAction(gestion_malek);
        actiondelete_publicite->setObjectName(QStringLiteral("actiondelete_publicite"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/res/img/delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_publicite->setIcon(icon1);
        actionadd_sponsor = new QAction(gestion_malek);
        actionadd_sponsor->setObjectName(QStringLiteral("actionadd_sponsor"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/res/img/user-add-icon---shine-set-add-new-user-add-user-30.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadd_sponsor->setIcon(icon2);
        actiondelete_sponsor = new QAction(gestion_malek);
        actiondelete_sponsor->setObjectName(QStringLiteral("actiondelete_sponsor"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/res/img/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actiondelete_sponsor->setIcon(icon3);
        centralwidget = new QWidget(gestion_malek);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 711, 461));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        table_publicite = new QTableView(tab);
        table_publicite->setObjectName(QStringLiteral("table_publicite"));
        table_publicite->setGeometry(QRect(20, 71, 651, 371));
        table_publicite->setSortingEnabled(true);
        table_publicite->horizontalHeader()->setCascadingSectionResizes(true);
        table_publicite->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_publicite->horizontalHeader()->setStretchLastSection(false);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 201, 31));
        publicite_sel_col = new QComboBox(tab);
        publicite_sel_col->setObjectName(QStringLiteral("publicite_sel_col"));
        publicite_sel_col->setGeometry(QRect(580, 30, 81, 22));
        rech_publicite = new QLineEdit(tab);
        rech_publicite->setObjectName(QStringLiteral("rech_publicite"));
        rech_publicite->setGeometry(QRect(430, 30, 141, 24));
        rech_publicite->setClearButtonEnabled(true);
        stat = new QPushButton(tab);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(400, 30, 24, 24));
        stat->setStyleSheet(QStringLiteral("background-image: url(:/res/img/unnamed.png);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        table_sponsor = new QTableView(tab_2);
        table_sponsor->setObjectName(QStringLiteral("table_sponsor"));
        table_sponsor->setGeometry(QRect(20, 70, 651, 371));
        table_sponsor->setSelectionMode(QAbstractItemView::ExtendedSelection);
        table_sponsor->setSortingEnabled(true);
        table_sponsor->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 191, 31));
        sponsor_sel_col = new QComboBox(tab_2);
        sponsor_sel_col->setObjectName(QStringLiteral("sponsor_sel_col"));
        sponsor_sel_col->setGeometry(QRect(590, 30, 81, 22));
        rech_sponsor = new QLineEdit(tab_2);
        rech_sponsor->setObjectName(QStringLiteral("rech_sponsor"));
        rech_sponsor->setGeometry(QRect(440, 30, 141, 24));
        rech_sponsor->setClearButtonEnabled(true);
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        rcpt = new QLineEdit(tab_5);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(10, 20, 491, 21));
        file = new QLineEdit(tab_5);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(10, 90, 571, 23));
        sendBtn = new QPushButton(tab_5);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(10, 420, 651, 23));
        subject = new QLineEdit(tab_5);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(10, 54, 651, 16));
        mail_pass = new QLineEdit(tab_5);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(522, 20, 141, 20));
        mail_pass->setEchoMode(QLineEdit::Password);
        msg = new QTextEdit(tab_5);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(10, 126, 651, 291));
        browseBtn = new QPushButton(tab_5);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(587, 89, 75, 24));
        tabWidget->addTab(tab_5, QString());
        gestion_malek->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_malek);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 22));
        gestion_malek->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_malek);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_malek->setStatusBar(statusbar);
        toolBar = new QToolBar(gestion_malek);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        gestion_malek->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionadd_publicite);
        toolBar->addAction(actiondelete_publicite);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionadd_sponsor);
        toolBar->addAction(actiondelete_sponsor);

        retranslateUi(gestion_malek);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_malek);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_malek)
    {
        gestion_malek->setWindowTitle(QApplication::translate("gestion_malek", "MainWindow", Q_NULLPTR));
        actionadd_publicite->setText(QApplication::translate("gestion_malek", "add_publicite", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_publicite->setShortcut(QApplication::translate("gestion_malek", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_publicite->setText(QApplication::translate("gestion_malek", "delete_publicite", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_publicite->setShortcut(QApplication::translate("gestion_malek", "Ctrl+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionadd_sponsor->setText(QApplication::translate("gestion_malek", "add_sponsor", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionadd_sponsor->setShortcut(QApplication::translate("gestion_malek", "Ctrl+Shift+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiondelete_sponsor->setText(QApplication::translate("gestion_malek", "delete_sponsor", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiondelete_sponsor->setShortcut(QApplication::translate("gestion_malek", "Ctrl+Shift+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("gestion_malek", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Liste Publicites</span></p></body></html>", Q_NULLPTR));
        publicite_sel_col->clear();
        publicite_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_malek", "All", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Type", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Cout", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Sponsor", Q_NULLPTR)
        );
        rech_publicite->setPlaceholderText(QApplication::translate("gestion_malek", "Recherche", Q_NULLPTR));
        stat->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_malek", "Publicites", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_malek", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#5500ff;\">Liste Sponsors</span></p></body></html>", Q_NULLPTR));
        sponsor_sel_col->clear();
        sponsor_sel_col->insertItems(0, QStringList()
         << QApplication::translate("gestion_malek", "All", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "ID", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Nom", Q_NULLPTR)
         << QApplication::translate("gestion_malek", "Prenom", Q_NULLPTR)
        );
        rech_sponsor->setPlaceholderText(QApplication::translate("gestion_malek", "Recherche", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_malek", "Sponsors", Q_NULLPTR));
        rcpt->setPlaceholderText(QApplication::translate("gestion_malek", "recipient", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("gestion_malek", "attachement here", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("gestion_malek", "Send", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("gestion_malek", "subject", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("gestion_malek", "your mail password", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("gestion_malek", "type your message here ...", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("gestion_malek", "Browse ...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("gestion_malek", "E-mail", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("gestion_malek", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_malek: public Ui_gestion_malek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_MALEK_H
