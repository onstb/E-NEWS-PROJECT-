/********************************************************************************
** Form generated from reading UI file 'stat_type.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_TYPE_H
#define UI_STAT_TYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_stat_type
{
public:
    QLabel *label;

    void setupUi(QDialog *stat_type)
    {
        if (stat_type->objectName().isEmpty())
            stat_type->setObjectName(QStringLiteral("stat_type"));
        stat_type->resize(450, 450);
        label = new QLabel(stat_type);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(25, 25, 400, 400));

        retranslateUi(stat_type);

        QMetaObject::connectSlotsByName(stat_type);
    } // setupUi

    void retranslateUi(QDialog *stat_type)
    {
        stat_type->setWindowTitle(QApplication::translate("stat_type", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stat_type: public Ui_stat_type {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_TYPE_H
