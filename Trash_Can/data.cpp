#include "data.h"
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QTime>
#include <QGraphicsTextItem>
#include <QtCharts/QAbstractAxis>


data::data(QGraphicsItem *parent, Qt::WindowFlags wFlags) :
    QChart(QChart::ChartTypeCartesian, parent, wFlags),
    spline_series(0),
    y1_axis(new QtCharts::QValueAxis),
    m_x(20),
    m_y(10)
{



  /*  qsrand((uint) QTime::currentTime().msec());

    spline_series = new QtCharts::QSplineSeries(this);
    *spline_series << QPointF(1, 5) << QPointF(3.5, 18) << QPointF(4.8, 7.5) << QPointF(10, 2.5);

    QPen green(Qt::red);
    green.setWidth(3);
    spline_series->setPen(green);
    spline_series->append(m_x, m_y);

    chart = new QtCharts::QChart(this);
    chart->addSeries(spline_series);
    chart->legend()->hide();
    chart->setTitle("Title of the Chart");

    x_axis = new QtCharts::QDateTimeAxis(this);
    x_axis->setTickCount(10);
    x_axis->setFormat("MMM yyyy");
    x_axis->setTitleText("Time");
    chart->addAxis(x_axis, Qt::AlignBottom);
    spline_series->attachAxis(x_axis);

    y1_axis = new QtCharts::QValueAxis(this);
    y1_axis->setLinePenColor(spline_series->pen().color());
    y1_axis->setLabelFormat("%i");
    y1_axis->setTitleText("Humidity in %");
    y1_axis->setRange(0,100);
    chart->addAxis(y1_axis, Qt::AlignLeft);
    spline_series->attachAxis(y1_axis);

    spline_series = new QtCharts::QSplineSeries;
    *spline_series << QPointF(1, 0.5) << QPointF(1.5, 4.5) << QPointF(2.4, 2.5) << QPointF(4.3, 12.5)
            << QPointF(5.2, 3.5) << QPointF(7.4, 16.5) << QPointF(8.3, 7.5) << QPointF(10, 38);
    chart->addSeries(spline_series);

    y2_axis = new QtCharts::QCategoryAxis(this);
    y2_axis->append("O Degrees", 0);
    y2_axis->append("15 Degrees", 15);
    y2_axis->append("30 Degrees", 30);
    y2_axis->append("45 Degrees",45);
    y2_axis->append("60 Degrees",60);

    y2_axis->setRange(0,60);
    y2_axis->setTitleText("Temperature in Celcius");
    y2_axis->setLinePenColor(spline_series->pen().color());

    chart->addAxis(y2_axis, Qt::AlignRight);
    spline_series->attachAxis(x_axis);
    spline_series->attachAxis(y2_axis);

    //chartView = new QtCharts::QChartView(chart);
    //chartView->setRenderHint(QPainter::Antialiasing);*/
}

 data::~data()
 {

 }

