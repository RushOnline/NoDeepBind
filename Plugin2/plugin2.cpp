#include <QDebug>

#include "plugin2.h"

const char* pluginSpecific() {
    return "plugin2";
}

int pluginMain() {
    qDebug("plugin2 pluginInternal(): %s", pluginSpecific());
    return 0;
}
