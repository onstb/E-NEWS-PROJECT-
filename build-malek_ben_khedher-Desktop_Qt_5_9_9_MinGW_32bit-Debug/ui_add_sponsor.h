/********************************************************************************
** Form generated from reading UI file 'add_sponsor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_SPONSOR_H
#define UI_ADD_SPONSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_sponsor
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *id;
    QLineEdit *nom;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *prenom;

    void setupUi(QDialog *add_sponsor)
    {
        if (add_sponsor->objectName().isEmpty())
            add_sponsor->setObjectName(QStringLiteral("add_sponsor"));
        add_sponsor->resize(247, 251);
        buttonBox = new QDialogButtonBox(add_sponsor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 180, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(add_sponsor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, -3, 191, 51));
        id = new QLineEdit(add_sponsor);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(110, 77, 113, 20));
        nom = new QLineEdit(add_sponsor);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(110, 107, 113, 20));
        label_2 = new QLabel(add_sponsor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 81, 47, 14));
        label_3 = new QLabel(add_sponsor);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 47, 14));
        label_4 = new QLabel(add_sponsor);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 143, 47, 14));
        prenom = new QLineEdit(add_sponsor);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(110, 140, 113, 20));

        retranslateUi(add_sponsor);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_sponsor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_sponsor, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_sponsor);
    } // setupUi

    void retranslateUi(QDialog *add_sponsor)
    {
        add_sponsor->setWindowTitle(QApplication::translate("add_sponsor", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("add_sponsor", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Sponsor</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("add_sponsor", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_sponsor", "Nom", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_sponsor", "Nom", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_sponsor: public Ui_add_sponsor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_SPONSOR_H
