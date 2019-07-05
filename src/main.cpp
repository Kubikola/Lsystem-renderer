#include <iostream>
#include <QApplication>

#include "mainwindow.hpp"
#include "lsystem.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}