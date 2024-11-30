#include "mainwindow.h"

UI::Menu::Menu(QWidget *parent) :
	QWidget(parent) {
		setMinimumSize(UI::MIN_WIDTH, UI::MIN_HEIGHT);
		// TODO:  Create game window (QWidget child to window)
		// TODO:  Initialize tetroid objs

		gameTitle = new QLabel("TETRIS", this);
		gameTitle->setGeometry(UI::MIN_WIDTH/2 - 40, 160, 80, 30);
		gameTitle->setAlignment(Qt::AlignHCenter);
		gameTitle->setTextFormat(Qt::RichText);

		game_btn = new QPushButton("New Game", this);
		game_btn->setGeometry(UI::MIN_WIDTH/2 - 40, 215, 80, 30);
		connect(game_btn, &QPushButton::clicked, this, &UI::Menu::newGame, Qt::QueuedConnection);

		quit_btn = new QPushButton("Quit", this);
		quit_btn ->setGeometry(UI::MIN_WIDTH/2 - 40, 255, 80, 30);
		// TODO: - Only closes Widget inside of QGraphicsScene
		connect(quit_btn, &QPushButton::clicked, this, &QWidget::close, Qt::QueuedConnection);
	}

	void UI::Menu::newGame() {
		gameTitle->hide();
		game_btn->hide();
		quit_btn->hide();

		pause_btn = new QPushButton("||", this);
		connect(pause_btn, &QPushButton::clicked, this, &UI::Menu::pauseMenu, Qt::QueuedConnection);
		pause_btn->setGeometry(UI::MIN_WIDTH - 30, 10, 20, 20);
		pause_btn->show();

		game_window = new Game::GameWindow(this);
		game_window->setSceneRect(0, 0, Game::MIN_WIDTH, Game::MIN_HEIGHT);

		view = new QGraphicsView(game_window, this);
		view->setMinimumHeight(Game::MIN_HEIGHT);
		view->setMinimumWidth(Game::MIN_WIDTH);
		view->show();

		/*
		 * TODO: Empty display for reserved tetroid
		 * TODO: Empty display for next tetroid
		 * TODO: Offset QGraphicsScene by 10-20px (aka give it a border)
		*/

	}
	void UI::Menu::pauseMenu() {
		view->hide();
		gameTitle->show();
		quit_btn->show();
	}
