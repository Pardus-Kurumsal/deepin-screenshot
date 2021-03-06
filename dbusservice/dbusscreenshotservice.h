/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a dbusscreenshotservice -c DBusScreenshotService -l DBusScreenshotService com.deepin.DeepinScreenshot.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DBUSSCREENSHOTSERVICE_H
#define DBUSSCREENSHOTSERVICE_H

#include "screenshot.h"
#include <QDBusAbstractAdaptor>

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.DeepinScreenshot
 */
class DBusScreenshotService: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.DeepinScreenshot")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.DeepinScreenshot\">\n"
"    <method name=\"StartScreenshot\"/>\n"
"    <method name=\"DelayScreenshot\">\n"
"      <arg direction=\"in\" type=\"x\"/>\n"
"   </method>\n"
"    <method name=\"NoNotifyScreenshot\"/>\n"
"    <method name=\"TopWindowScreenshot\"/>\n"
"    <method name=\"FullscreenScreenshot\"/>\n"
"    <method name=\"SavePathScreenshot\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    DBusScreenshotService(Screenshot *parent);
    ~DBusScreenshotService();

    inline DBusScreenshotService *parent() const
    { return static_cast<DBusScreenshotService *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void StartScreenshot();
    void DelayScreenshot(qlonglong in0);
    void NoNotifyScreenshot();
    void TopWindowScreenshot();
    void FullscreenScreenShot();
    void SavePathScreenshot(const QString &in0);
Q_SIGNALS: // SIGNALS
};

#endif
