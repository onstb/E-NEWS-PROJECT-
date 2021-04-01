#ifndef STAT_PUBLICITE_H
#define STAT_PUBLICITE_H

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
class stat_publicite;
}

class stat_publicite : public QDialog
{
    Q_OBJECT

public:
    explicit stat_publicite(QWidget *parent = nullptr);
    ~stat_publicite();

    QChartView *chartView ;
    void choix_pie();

private:
    Ui::stat_publicite *ui;
};

#endif // STAT_PUBLICITE_H
