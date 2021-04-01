/********************************************************************************
** Form generated from reading UI file 'add_journaliste.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_JOURNALISTE_H
#define UI_ADD_JOURNALISTE_H

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

class Ui_add_journaliste
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *id;
    QLineEdit *nom;
    QLineEdit *nb_articles;
    QComboBox *specialite;

    void setupUi(QDialog *add_journaliste)
    {
        if (add_journaliste->objectName().isEmpty())
            add_journaliste->setObjectName(QStringLiteral("add_journaliste"));
        add_journaliste->resize(284, 300);
        buttonBox = new QDialogButtonBox(add_journaliste);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 260, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(add_journaliste);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 231, 51));
        label_2 = new QLabel(add_journaliste);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 84, 47, 14));
        label_3 = new QLabel(add_journaliste);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 113, 47, 14));
        label_4 = new QLabel(add_journaliste);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 143, 47, 14));
        label_5 = new QLabel(add_journaliste);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 171, 81, 16));
        id = new QLineEdit(add_journaliste);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(100, 80, 113, 20));
        nom = new QLineEdit(add_journaliste);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(100, 110, 113, 20));
        nb_articles = new QLineEdit(add_journaliste);
        nb_articles->setObjectName(QStringLiteral("nb_articles"));
        nb_articles->setGeometry(QRect(130, 170, 81, 20));
        nb_articles->setReadOnly(true);
        specialite = new QComboBox(add_journaliste);
        specialite->setObjectName(QStringLiteral("specialite"));
        specialite->setGeometry(QRect(100, 140, 111, 22));

        retranslateUi(add_journaliste);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_journaliste, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_journaliste, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_journaliste);
    } // setupUi

    void retranslateUi(QDialog *add_journaliste)
    {
        add_journaliste->setWindowTitle(QApplication::translate("add_journaliste", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("add_journaliste", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Journaliste</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_journaliste", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_journaliste", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_journaliste", "Specialite", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_journaliste", "Nombre Articles", Q_NULLPTR));
        specialite->clear();
        specialite->insertItems(0, QStringList()
         << QApplication::translate("add_journaliste", "specialite 1", Q_NULLPTR)
         << QApplication::translate("add_journaliste", "specialite 2", Q_NULLPTR)
         << QApplication::translate("add_journaliste", "specialite 3", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class add_journaliste: public Ui_add_journaliste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_JOURNALISTE_H
