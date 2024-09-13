#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QApplication>
#include <QPushButton>

class Window : public QWidget {
	public:
	explicit Window(QWidget *parent = 0);
	private:
	QPushButton *testBtn;
	QPushButton *quitBtn;
};
#endif

