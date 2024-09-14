#include "mainwindow.h"

UI::Window::Window(QWidget *parent) :
	QWidget(parent) {
		setFixedSize(800, 400);

		testBtn = new QPushButton("Tetris test", this);
		testBtn->setGeometry(10, 10, 80, 40);
		quitBtn = new QPushButton("Quit", this);
		quitBtn ->setGeometry(10, 360, 40, 30); // TODO : conn pressed() to QApp::quit()
		
		QWidget *gameWindow = new QWidget(this);
		gameWindow->setGeometry(310, 10, 200, 240);
		// gamewindow->setPalette("#ffffff");
}

