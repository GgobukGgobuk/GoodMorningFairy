#ifndef TAB8ALARAMSETTING_H
#define TAB8ALARAMSETTING_H

#include <QWidget>
#include <QTime>
#include "socketclient.h"

namespace Ui {
class Tab8AlaramSetting;
}

class Tab8AlaramSetting : public QWidget
{
    Q_OBJECT

public:
    explicit Tab8AlaramSetting(QWidget *parent = nullptr);
    ~Tab8AlaramSetting();
    SocketClient * pSocketClient;

private:
    Ui::Tab8AlaramSetting *ui;

private slots:
    void connectToServerSlot(bool);
//    void socketRecvpdateSlot(QString);
//    void socketSendServer();
//    void slotConnectServer();
//    void slotClosedByServer();


};

#endif // TAB8ALARAMSETTING_H
