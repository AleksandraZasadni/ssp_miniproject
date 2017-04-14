#ifndef DATA_H
#define DATA_H

#include <QMainWindow>
#include <QWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCore/QDateTime>
#include <QtCharts/QDateTimeAxis>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QtCore/QDebug>
#include <QtCharts/QValueAxis>
#include <QVector3D>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCore/QTimer>


QT_CHARTS_BEGIN_NAMESPACE
class QSplineSeries;
class QValueAxis;
QT_CHARTS_END_NAMESPACE

//class data : public QWidget, QtCharts::QChart

class data : public QtCharts::QChart

{
    Q_OBJECT
public:
    data(QGraphicsItem *parent = 0, Qt::WindowFlags wFlags = 0);
    //explicit data(QWidget *parent = 0);
    virtual ~data();

private:
    //QTimer m_timer;

    QtCharts::QChart *chart;
    QtCharts::QSplineSeries *spline_series;
    QtCharts::QValueAxis *y1_axis;
    QtCharts::QCategoryAxis *y2_axis;
    QtCharts::QDateTimeAxis *x_axis;
    QtCharts::QChartView *chartView;

    qreal m_x;
    qreal m_y;


};

#endif // DATA_H
