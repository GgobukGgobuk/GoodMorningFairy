#include "tab8alaramsetting.h"
#include "ui_tab8alaramsetting.h"

Tab8AlaramSetting::Tab8AlaramSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab8AlaramSetting)
{
    ui->setupUi(this);
    pSocketClient = new SocketClient(this);

    connect(ui->alaramEditButton, SIGNAL(clicked(bool)), this, SLOT(connectToServerSlot(bool)));
    //connect(pSocketClient->getpQTcpSocket(),SIGNAL(connected()),this,SLOT(slotConnectServer()));
    //connect(ui->alaramEditButton, SIGNAL(clicked(bool)), this, SLOT(slotSocketSendData()));
}

void Tab8AlaramSetting::connectToServerSlot(bool bCheck)
{
    bool bOk;
    pSocketClient->slotConnectToServer(bOk);
    QString strRecvId;
    QString strSendData;
    strRecvId = "123";
    strSendData = "test";

   pSocketClient->slotSocketSendData(strSendData);

    /*
    if(bCheck)
    {
        pSocketClient->slotConnectToServer(bOk);
        if(bOk) {
//            ui->pPBServerConnect->setText("서버 해제");
//            ui->pPBsendButton->setEnabled(true);

        }
        //ui->pPBServerConnect->setChecked(false);
    }
    else
    {
        pSocketClient->slotClosedByServer();
        ui->pPBServerConnect->setText("서버 연결");
        ui->pPBsendButton->setEnabled(false);
    }
    */
}



Tab8AlaramSetting::~Tab8AlaramSetting()
{
    delete ui;
}
