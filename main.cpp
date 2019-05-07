#include "mainwindow.h"
#include <QApplication>
#include <MyGlobalShortCut/MyGlobalShortCut.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // 用法

    MyGlobalShortCut *shortcut = new MyGlobalShortCut("Ctrl+F9",&w);
    QObject::connect(shortcut,SIGNAL(activated()),&w,SLOT(activated()));

    return a.exec();
}
