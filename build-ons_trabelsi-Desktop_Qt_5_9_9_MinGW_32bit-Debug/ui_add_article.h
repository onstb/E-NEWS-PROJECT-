/********************************************************************************
** Form generated from reading UI file 'add_article.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ARTICLE_H
#define UI_ADD_ARTICLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_article
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *id;
    QComboBox *type;
    QComboBox *journaliste;

    void setupUi(QDialog *add_article)
    {
        if (add_article->objectName().isEmpty())
            add_article->setObjectName(QStringLiteral("add_article"));
        add_article->resize(286, 300);
        buttonBox = new QDialogButtonBox(add_article);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 260, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(add_article);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 191, 41));
        label_2 = new QLabel(add_article);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 84, 47, 14));
        label_3 = new QLabel(add_article);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 113, 47, 14));
        label_4 = new QLabel(add_article);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 145, 61, 16));
        id = new QLineEdit(add_article);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(110, 80, 113, 20));
        type = new QComboBox(add_article);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(110, 110, 111, 22));
        journaliste = new QComboBox(add_article);
        journaliste->setObjectName(QStringLiteral("journaliste"));
        journaliste->setGeometry(QRect(110, 140, 111, 22));

        retranslateUi(add_article);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_article, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_article, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_article);
    } // setupUi

    void retranslateUi(QDialog *add_article)
    {
        add_article->setWindowTitle(QApplication::translate("add_article", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("add_article", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Articles</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_article", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_article", "Type", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_article", "Journaliste", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("add_article", "type 1", Q_NULLPTR)
         << QApplication::translate("add_article", "type 2", Q_NULLPTR)
         << QApplication::translate("add_article", "type 3", Q_NULLPTR)
         << QApplication::translate("add_article", "type 4", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class add_article: public Ui_add_article {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ARTICLE_H
