#include "gamewindow.h"

const char* GRID_PATH = "/home/kurt/Projects/C++/Tetris/lib/img/grid.png";

Game::GameWindow::GameWindow(QWidget* parent) :
	QGraphicsScene(parent) {
		grid = new QGraphicsPixmapItem();
		grid->setPixmap(QPixmap(QString(GRID_PATH), nullptr));
		this->addItem(grid);


		tetromino = new Tetroid(nullptr);
		tetromino->setScale(1);
		this->addItem(tetromino);
		tetromino->setY(0);
	}
