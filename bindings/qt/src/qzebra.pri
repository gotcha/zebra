################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
include(../common.pri)
INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

qzebra-uselib:!qzebra-buildlib {
    LIBS += -L$$QZEBRA_LIBDIR -l$$QZEBRA_LIBNAME
} else {
    HEADERS       += \
                     $$PWD/qzebra.h \
                     $$PWD/qxrapmsg.h \
                     $$PWD/qzebhandler.h \
                     $$PWD/qxraptraffic.h \
                     $$PWD/qzebclient.h \
                     $$PWD/qzmsg.h \
                     $$PWD/qzhash.h \
                     $$PWD/qzactor.h \
                     $$PWD/qzsock.h \
                     $$PWD/qzframe.h \
                     $$PWD/qzuuid.h \
                     $$PWD/qzlist.h

    SOURCES       += \
                     $$PWD/qxrapmsg.cpp \
                     $$PWD/qzebhandler.cpp \
                     $$PWD/qxraptraffic.cpp \
                     $$PWD/qzebclient.cpp \
                     $$PWD/qzmsg.cpp \
                     $$PWD/qzhash.cpp \
                     $$PWD/qzactor.cpp \
                     $$PWD/qzsock.cpp \
                     $$PWD/qzframe.cpp \
                     $$PWD/qzuuid.cpp \
                     $$PWD/qzlist.cpp
}

win32 {
    qzebra-buildlib:shared:DEFINES += QT_ZEBRA_EXPORT
    else:qzebra-uselib:DEFINES += QT_ZEBRA_IMPORT
}
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
