#ifndef __PLUGIN_H__
#define __PLUGIN_H__

#include <QtCore/qglobal.h>

/*
#if defined(BUILD_PLUGIN)
#  define PLUGIN_API Q_DECL_EXPORT
#else
#  define PLUGIN_API Q_DECL_IMPORT
#endif
*/

#define PLUGIN_API

typedef int (*PLUGIN_MAIN)();

#endif /* __PLUGIN_H__ */
