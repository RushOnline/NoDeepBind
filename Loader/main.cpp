#include <QApplication>
#include <QDebug>
#include <QLibrary>
#include <plugin.h>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug("Loading plugins...");

    QLibrary lp1("/home/rush/workspace/build-Plugins-Qt_4_8_6-Debug/Plugin1/libplugin1.so");
    QLibrary lp2("/home/rush/workspace/build-Plugins-Qt_4_8_6-Debug/Plugin2/libplugin2.so");

    qDebug() << "loading" << lp1.fileName() << lp1.load();
    qDebug() << "loading" << lp2.fileName() << lp2.load();


    PLUGIN_MAIN pluginMain1 = (PLUGIN_MAIN) lp1.resolve("pluginMain");
    PLUGIN_MAIN pluginMain2 = (PLUGIN_MAIN) lp2.resolve("pluginMain");

    qDebug("init plugin1");
    pluginMain1();

    qDebug("init plugin2");
    pluginMain2();

    qDebug("init plugin1");
    pluginMain1();

    qDebug("init plugin2");
    pluginMain2();

    return a.exec();
}
