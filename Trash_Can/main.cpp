#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication trashCan(argc, argv);
    MainWindow windowTrash;
    windowTrash.show();

    return trashCan.exec();
}
