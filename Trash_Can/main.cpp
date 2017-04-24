#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include "timethread.h"
#include "trashsettings.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication trashCan(argc, argv);

    MainWindow windowsTrash;
    windowsTrash.show();

    return trashCan.exec();
}
