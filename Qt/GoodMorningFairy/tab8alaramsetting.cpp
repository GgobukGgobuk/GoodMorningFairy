#include "tab8alaramsetting.h"
#include "ui_tab8alaramsetting.h"

Tab8AlaramSetting::Tab8AlaramSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab8AlaramSetting)
{
    ui->setupUi(this);

}

Tab8AlaramSetting::~Tab8AlaramSetting()
{
    delete ui;
}
