#include <QDebug>

#include "plugin1.h"

const char* pluginSpecific() {
    return "plugin1";
}

int pluginMain() {
    qDebug("plugin1 pluginInternal(): %s", pluginSpecific());
    return 0;
}
