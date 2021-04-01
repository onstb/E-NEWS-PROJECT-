/********************************************************************************
** Form generated from reading UI file 'stat_publicite.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_PUBLICITE_H
#define UI_STAT_PUBLICITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_stat_publicite
{
public:
    QLabel *label;

    void setupUi(QDialog *stat_publicite)
    {
        if (stat_publicite->objectName().isEmpty())
            stat_publicite->setObjectName(QStringLiteral("stat_publicite"));
        stat_publicite->resize(450, 450);
        label = new QLabel(stat_publicite);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(25, 25, 400, 400));

        retranslateUi(stat_publicite);

        QMetaObject::connectSlotsByName(stat_publicite);
    } // setupUi

    void retranslateUi(QDialog *stat_publicite)
    {
        stat_publicite->setWindowTitle(QApplication::translate("stat_publicite", "Dialog", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class stat_publicite: public Ui_stat_publicite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_PUBLICITE_H
