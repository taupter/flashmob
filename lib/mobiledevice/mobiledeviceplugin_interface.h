#ifndef MOBILEDEVICEPLUGIN_INTERFACE_H
#define MOBILEDEVICEPLUGIN_INTERFACE_H

#define MOBILEDEVICEPLUGIN_OFFLINE      0
#define MOBILEDEVICEPLUGIN_IDLE         1
#define MOBILEDEVICEPLUGIN_FLASHING     2
#define MOBILEDEVICEPLUGIN_DUMPING      3

#include <QtPlugin>

QT_BEGIN_NAMESPACE
class QWidget;
class QChar;
class QString;
class QStringList;
QT_END_NAMESPACE

class MoibleDevicePluginInterface : public QObject
{
    Q_OBJECT
public:
    enum DeviceType { Handset, Speaker, Headset };

    virtual ~TmipCallPluginInterface() {}

    virtual void init(qint64) = 0;
    virtual QString model() = 0;
    virtual QString manufacturer() = 0;
    virtual quint64 status() = 0;
    virtual void flash() = 0;
    virtual void dump() = 0;
    virtual MobileDevicePluginInterface* newInstance() = 0;
    virtual int saveSettings() = 0;

signals:
    void callplugin_idle_state_signal();
    void callplugin_call_incoming_signal();
    void callplugin_call_in_progress_signal();
    void callplugin_call_terminated_signal();
    void callplugin_busy_state_signal();

private:
    virtual int loadSettings() = 0;
    virtual int setStatus(int) = 0;

    QString m_name; // High-level instance-specific name of the exported plugin
    qint64 m_index;
//    MobileDeviceSettings m_settings;
};

QT_BEGIN_NAMESPACE

#define MobileDevicePluginInterface_iid "br.com.taupter.FlashMob.MobileDevice.PluginInterface"
Q_DECLARE_INTERFACE(MobileDevicePluginInterface, MobileDevicePluginInterface_iid)

QT_END_NAMESPACE


#endif // MOBILEDEVICEPLUGIN_INTERFACE_H
