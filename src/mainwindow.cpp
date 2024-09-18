#include "mainwindow.h"

UI::Window::Window(QWidget *parent) :
	QWidget(parent) {
		setFixedSize(800, 400);
		quitBtn = new QPushButton("Quit", this);
		quitBtn ->setGeometry(10, 360, 40, 30); // TODO : conn pressed() to QApp::quit()
		connect(quitBtn, &QPushButton::clicked, this, &QWidget::close, Qt::QueuedConnection);
		setPalette(QPalette(QColor(255, 255, 255)));

		// TODO - Create game window (QWidget child to window)
		// TODO - Initialize tetroid objs
	/*
		gameWindow = new QWidget(this);
		gameWindow->setGeometry(310, 10, 200, 240);
		gameWindow->setPalette(QPalette(QColor(255, 255, 255)));
		gameWindow->show();
		*/
}

