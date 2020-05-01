#ifndef KPUSHBUTTON_H
#define KPUSHBUTTON_H

#include <QMainWindow>

namespace Ui {
class KPushButton;
}

class KPushButton : public QMainWindow
{
	Q_OBJECT

public:
	explicit KPushButton(QWidget *parent = nullptr);
	~KPushButton();

private:
	Ui::KPushButton *ui;
};

#endif // KPUSHBUTTON_H
