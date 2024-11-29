#include "mainwindow.h"

UI::Menu::Menu(QWidget *parent) :
	QWidget(parent) {
		setMinimumSize(UI::MIN_WIDTH, UI::MIN_HEIGHT);
		// TODO - Create game window (QWidget child to window)
		// TODO - Initialize tetroid objs

		gameTitle = new QLabel("TETRIS", this);
		gameTitle->setGeometry(UI::MIN_WIDTH/2 - 40, 160, 80, 30);
		gameTitle->setAlignment(Qt::AlignHCenter);
		gameTitle->setTextFormat(Qt::RichText);

		gameBtn = new QPushButton("New Game", this);
		gameBtn->setGeometry(UI::MIN_WIDTH/2 - 40, 215, 80, 30);
		connect(gameBtn, &QPushButton::clicked, this, &UI::Menu::NewGame, Qt::QueuedConnection);

		quitBtn = new QPushButton("Quit", this);
		quitBtn ->setGeometry(UI::MIN_WIDTH/2 - 40, 255, 80, 30);
		// TODO - Only closes Widget inside of QGraphicsScene
		connect(quitBtn, &QPushButton::clicked, this, &QWidget::close, Qt::QueuedConnection);
	}

	void UI::Menu::NewGame() {
		gameTitle->hide();
		gameBtn->hide();
		quitBtn->hide();

		pauseBtn = new QPushButton("||", this);
		connect(pauseBtn, &QPushButton::clicked, this, &UI::Menu::PauseMenu, Qt::QueuedConnection);
		pauseBtn->setGeometry(UI::MIN_WIDTH - 30, 10, 20, 20);
		pauseBtn->show();

		gameWindow = new Game::GameWindow(this);
		gameWindow->setSceneRect(0, 0, Game::MIN_WIDTH, Game::MIN_HEIGHT);

		view = new QGraphicsView(gameWindow, this);
		view->setMinimumHeight(Game::MIN_HEIGHT);
		view->setMinimumWidth(Game::MIN_WIDTH);
		view->show();

		/*
		 * TODO Empty display for reserved tetroid
		 * TODO Empty display for next tetroid
		 * TODO - Offset QGraphicsScene by 10-20px (aka give it a border)
		*/

	}
	void UI::Menu::PauseMenu() {
		view->hide();
		gameTitle->show();
		quitBtn->show();
	}
