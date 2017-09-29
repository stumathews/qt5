#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // This represents the main window within the application.
    MainWindow w;
    w.show();
    
    // This starts the message loop.
    return a.exec();
}

/* Hello Mom */
