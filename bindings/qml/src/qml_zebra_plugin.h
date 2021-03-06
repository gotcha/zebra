/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/

#ifndef QML_ZEBRA_PLUGIN_H
#define QML_ZEBRA_PLUGIN_H

#include <QQmlExtensionPlugin>
#include <qqml.h>

class QmlXrapMsg;
class QmlXrapMsgAttached;
class QmlZebHandler;
class QmlZebHandlerAttached;
class QmlXrapTraffic;
class QmlXrapTrafficAttached;
class QmlZebClient;
class QmlZebClientAttached;

#include "QmlXrapMsg.h"
#include "QmlZebHandler.h"
#include "QmlXrapTraffic.h"
#include "QmlZebClient.h"

class QmlZebraPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA (IID "org.qt-project.Qt.QQmlExtensionInterface")
    
public:
    void registerTypes (const char *uri)
    {
        qmlRegisterType<QmlXrapMsg> (uri, 1, 0, "QmlXrapMsg");
        qmlRegisterType<QmlXrapMsgAttached>();
        qmlRegisterType<QmlZebHandler> (uri, 1, 0, "QmlZebHandler");
        qmlRegisterType<QmlZebHandlerAttached>();
        qmlRegisterType<QmlXrapTraffic> (uri, 1, 0, "QmlXrapTraffic");
        qmlRegisterType<QmlXrapTrafficAttached>();
        qmlRegisterType<QmlZebClient> (uri, 1, 0, "QmlZebClient");
        qmlRegisterType<QmlZebClientAttached>();
    };
};

#endif

/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
