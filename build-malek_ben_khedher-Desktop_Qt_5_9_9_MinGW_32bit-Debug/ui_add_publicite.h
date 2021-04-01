/********************************************************************************
** Form generated from reading UI file 'add_publicite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PUBLICITE_H
#define UI_ADD_PUBLICITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_add_publicite
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *id;
    QComboBox *sponsor;
    QComboBox *type;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_5;
    QDoubleSpinBox *cout;

    void setupUi(QDialog *add_publicite)
    {
        if (add_publicite->objectName().isEmpty())
            add_publicite->setObjectName(QStringLiteral("add_publicite"));
        add_publicite->resize(243, 267);
        buttonBox = new QDialogButtonBox(add_publicite);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 220, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        id = new QLineEdit(add_publicite);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(110, 80, 113, 20));
        sponsor = new QComboBox(add_publicite);
        sponsor->setObjectName(QStringLiteral("sponsor"));
        sponsor->setGeometry(QRect(110, 170, 111, 22));
        type = new QComboBox(add_publicite);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(110, 110, 111, 22));
        label_2 = new QLabel(add_publicite);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 84, 47, 14));
        label_4 = new QLabel(add_publicite);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 175, 61, 16));
        label_3 = new QLabel(add_publicite);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 113, 47, 14));
        label = new QLabel(add_publicite);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 201, 41));
        label_5 = new QLabel(add_publicite);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 143, 61, 16));
        cout = new QDoubleSpinBox(add_publicite);
        cout->setObjectName(QStringLiteral("cout"));
        cout->setGeometry(QRect(110, 140, 111, 22));

        retranslateUi(add_publicite);
        QObject::connect(buttonBox, SIGNAL(accepted()), add_publicite, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), add_publicite, SLOT(reject()));

        QMetaObject::connectSlotsByName(add_publicite);
    } // setupUi

    void retranslateUi(QDialog *add_publicite)
    {
        add_publicite->setWindowTitle(QApplication::translate("add_publicite", "Dialog", Q_NULLPTR));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("add_publicite", "type 1", Q_NULLPTR)
         << QApplication::translate("add_publicite", "type 2", Q_NULLPTR)
         << QApplication::translate("add_publicite", "type 3", Q_NULLPTR)
         << QApplication::translate("add_publicite", "type 4", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("add_publicite", "ID", Q_NULLPTR));
        label_4->setText(QApplication::translate("add_publicite", "Sponsor", Q_NULLPTR));
        label_3->setText(QApplication::translate("add_publicite", "Type", Q_NULLPTR));
        label->setText(QApplication::translate("add_publicite", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#0000ff;\">Details Publicite</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("add_publicite", "Cout", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class add_publicite: public Ui_add_publicite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PUBLICITE_H
