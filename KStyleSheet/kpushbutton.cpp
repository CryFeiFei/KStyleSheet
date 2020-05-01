#include "kpushbutton.h"
#include "ui_kpushbutton.h"

KPushButton::KPushButton(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::KPushButton)
{
	ui->setupUi(this);
}

KPushButton::~KPushButton()
{
	delete ui;
}
