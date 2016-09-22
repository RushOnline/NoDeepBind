#ifndef PLUGIN_H
#define PLUGIN_H

#include <plugin.h>

extern "C" {
    PLUGIN_API const char* pluginSpecific();
    PLUGIN_API int pluginMain();
}

#endif // PLUGIN_H
