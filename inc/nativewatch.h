#ifndef __nativewatch_H__
#define __nativewatch_H__

#include <watch_app.h>
#include <watch_app_efl.h>
#include <Elementary.h>
#include <string.h>
#include <app_common.h>
#include <dlog.h>

#ifdef  LOG_TAG
#undef  LOG_TAG
#endif
#define LOG_TAG "nativewatch"

#if !defined(PACKAGE)
#define PACKAGE "org.trs.nativewatch"
#endif

#define EDJE_FILE_PATH "edje/main.edj"

#endif /* __nativewatch_H__ */
