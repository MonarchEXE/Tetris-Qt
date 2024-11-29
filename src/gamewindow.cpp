#include "gamewindow.h"

Game::GameWindow::GameWindow(QWidget* parent) :
	QGraphicsScene(parent) {
		tetromino = new Tetroid(nullptr);
		tetromino->setScale(1);
		this->addItem(tetromino);
		tetromino->setY(0);
	}
