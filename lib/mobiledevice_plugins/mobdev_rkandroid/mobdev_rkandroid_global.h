#ifndef MOBDEV_RKANDROID_GLOBAL_H
#define MOBDEV_RKANDROID_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MOBDEV_RKANDROID_LIBRARY)
#  define MOBDEV_RKANDROIDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MOBDEV_RKANDROIDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MOBDEV_RKANDROID_GLOBAL_H