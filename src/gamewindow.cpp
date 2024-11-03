#include "gamewindow.h"

Game::GameWindow::GameWindow(QWidget* parent) :
	QWidget(parent) {
		setGeometry(10, 10, 200, 480);
		tetromino = new Tetroid(this);
		tetromino->show(); // TEST ONLY, DO NOT ACTUALLY KEEP THIS, FUTURE ME
	}

