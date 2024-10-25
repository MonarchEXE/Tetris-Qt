#include "mainwindow.h"

UI::Window::Window(QWidget *parent) :
	QWidget(parent) {
		setFixedSize(220, 500);
		// TODO - Create game window (QWidget child to window)
		// TODO - Initialize tetroid objs

		gameTitle = new QLabel("TETRIS", this);
		gameTitle->setGeometry(60, 160, 80, 30);
		gameTitle->setAlignment(Qt::AlignHCenter);
		gameTitle->setTextFormat(Qt::RichText);

		gameBtn = new QPushButton("New Game", this);
		gameBtn->setGeometry(60, 215, 80, 30);
		connect(gameBtn, &QPushButton::clicked, this, &UI::Window::NewGame, Qt::QueuedConnection);

		quitBtn = new QPushButton("Quit", this);
		quitBtn ->setGeometry(60, 255, 80, 30);
		connect(quitBtn, &QPushButton::clicked, this, &QWidget::close, Qt::QueuedConnection);
	}
	void UI::Window::NewGame() {
		gameTitle->hide();
		gameBtn->hide();
		quitBtn->hide();

		pauseBtn = new QPushButton("||", this);
		connect(pauseBtn, &QPushButton::clicked, this, &UI::Window::PauseMenu, Qt::QueuedConnection);
		pauseBtn->setGeometry(190, 10, 20, 20);
		pauseBtn->show();

		gameWindow = new Game::GameWindow(this);
		gameWindow->setGeometry(10, 10, 100, 480);
		gameWindow->show();


		/*
		 * TODO Empty display for reserved tetroid
		 * TODO Empty display for next tetroid
		*/

	}
	void UI::Window::PauseMenu() {
		gameTitle->show();
		quitBtn->show();
	}
