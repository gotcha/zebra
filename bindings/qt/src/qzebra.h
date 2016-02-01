/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#ifndef Q_ZEBRA_H
#define Q_ZEBRA_H

#include <QObject>
#include <QString>
#include <zebra.h>

#if defined(Q_OS_WIN)
#  if !defined(QT_ZEBRA_EXPORT) && !defined(QT_ZEBRA_IMPORT)
#    define QT_ZEBRA_EXPORT
#  elif defined(QT_ZEBRA_IMPORT)
#    if defined(QT_ZEBRA_EXPORT)
#      undef QT_ZEBRA_EXPORT
#    endif
#    define QT_ZEBRA_EXPORT __declspec(dllimport)
#  elif defined(QT_ZEBRA_EXPORT)
#    undef QT_ZEBRA_EXPORT
#    define QT_ZEBRA_EXPORT __declspec(dllexport)
#  endif
#else
#  define QT_ZEBRA_EXPORT
#endif

//  Opaque class structures to allow forward references
class QXrapMsg;
class QZebHandler;
class QXrapTraffic;
class QZebClient;
class QZmsg;
class QZhash;
class QZactor;
class QZsock;
class QZframe;
class QZuuid;
class QZlist;

//  Public API classes
#include "qxrapmsg.h"
#include "qzebhandler.h"
#include "qxraptraffic.h"
#include "qzebclient.h"
#include "qzmsg.h"
#include "qzhash.h"
#include "qzactor.h"
#include "qzsock.h"
#include "qzframe.h"
#include "qzuuid.h"
#include "qzlist.h"

#endif //  Q_ZEBRA_H
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/