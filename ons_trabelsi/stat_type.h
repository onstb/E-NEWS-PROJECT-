#ifndef STAT_TYPE_H
#define STAT_TYPE_H

#include <QDialog>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

#include <iostream>
#include <vector>
using namespace std;

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class stat_type;
}

class stat_type : public QDialog
{
    Q_OBJECT

public:
    explicit stat_type(QWidget *parent = nullptr);
    ~stat_type();

    QChartView *chartView ;
    void choix_pie();

private:
    Ui::stat_type *ui;
};

#endif // STAT_TYPE_H
