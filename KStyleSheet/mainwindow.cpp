#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "kpushbutton.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	connect(ui->pushButton, &QPushButton::clicked,
			[]()->void
			{
				KPushButton btn;
				btn.show();
				QEventLoop loop;
				loop.exec();
			});
}

MainWindow::~MainWindow()
{
	delete ui;
}

