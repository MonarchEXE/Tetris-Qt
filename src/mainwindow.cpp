#include "mainwindow.h"

UI::Window::Window(QWidget *parent) :
	QWidget(parent) {
		setFixedSize(220, 500);
		// TODO - Create game window (QWidget child to window)
		// TODO - Initialize tetroid objs

<<<<<<< HEAD
		gameWindow = new QWidget(this);
		gameWindow->setGeometry(10, 10, 200, 480);
		gameWindow->setPalette(QPalette(QColor(20, 20, 20)));

		gameTitle = new QLabel("TETRIS", gameWindow);
		gameTitle->setGeometry(60, 160, 80, 30);
		gameTitle->setPalette(QPalette(QColor(0, 0, 0)));
		gameTitle->setAlignment(Qt::AlignHCenter);
		gameTitle->setTextFormat(Qt::RichText);

		gameBtn = new QPushButton("New Game", gameWindow);
		gameBtn->setGeometry(60, 215, 80, 30);

		quitBtn = new QPushButton("Quit", gameWindow);
		quitBtn ->setGeometry(60, 255, 80, 30);
		connect(quitBtn, &QPushButton::clicked, this, &QWidget::close, Qt::QueuedConnection);


	}
=======
		quitBtn = new QPushButton("Quit", this);
		quitBtn ->setGeometry(10, 360, 40, 30); // TODO : conn pressed() to QApp::quit()
		connect(quitBtn, &QPushButton::clicked, this, &Window::close, Qt::QueuedConnection);

		gameWindow = new QWidget(this);
		gameWindow->setGeometry(310, 10, 200, 240);
		gameWindow->setPalette(QPalette(QColor(255, 255, 255)));
		gameWindow->show();
		// gamewindow->setPalette("#ffffff");
}
>>>>>>> c5a42f8 (feat: quit button added)

