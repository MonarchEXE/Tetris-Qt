#include "gamewindow.h"
#include <iostream>

const char* TETROMINO_IMAGE_PATH = "/home/kurt/Projects/C++/Tetris/lib/tetrominoes";

Game::Tetroid::Tetroid(QGraphicsItem *parent) :
	QGraphicsPixmapItem(parent) {
		tetroidShape = new QPixmap();
		this->setPixmap(*Game::Tetroid::GetShape(tetroidShape));
		this->setFlag(QGraphicsItem::ItemIsFocusable);
		this->setFocus();

	}

/******* PRIVATE FUNCTIONS *******/

// NOTE: not needed as part of Game::Tetroid as it cares about QGraphicsItem in focus
void QGraphicsItem::keyPressEvent(QKeyEvent* key_press) {
	if(key_press->key() == Qt::Key_Left && this->x() != 0) {
		this->setX(this->x() - Game::TILE_SIZE);
		std::cout << this->x();
		return;
	}
	// FIX: Does not take into account tetromino width
	if(key_press->key() == Qt::Key_Right && this->x() != Game::MIN_WIDTH) {
		this->setX(this->x() + Game::TILE_SIZE);
		return;
	}
	// FIX: Does not take into account tetromino height
	if(key_press->key() == Qt::Key_Down && this->y() != Game::MIN_HEIGHT) {
		this->setY(this->y() + Game::TILE_SIZE);
	}
	// FIX:Does not rotate on at a centered point
	if(key_press->key() == Qt::Key_Up) {
		this->setRotation(this->rotation() + 90);
	}

	return;
}

QPixmap* Game::Tetroid::GetShape(QPixmap* &tetroidShape) { // BUG - cmake exits; there's a missing library????
/*
 * Randomly selects a tetroid shape for game to draw
 * Tetromino rotation calls for img manipulation
 * TODO - Potenitally check for tetroid repitition to keep true(?) randomisation
 */
// int type cast handles the rounding
	int* shape = new int;
	char* relativePath = new char[100];
	strcpy(relativePath, TETROMINO_IMAGE_PATH);
	*shape = std::rand() % 8;
	switch(*shape){
		// TODO - Update from absolute path to relative path search (or update the const to have the absolute path)
		case 1:
			strcat(relativePath, "/Cube.png");
			break;
		case 2:
			strcat(relativePath, "/L-Inverted.png");
			break;
		case 3:
			strcat(relativePath, "/L-R_Zigzag.png");
			break;
		case 4:
			strcat(relativePath, "/L-Shape.png");
			break;
		case 5:
			strcat(relativePath, "/Long.png");
			break;
		case 6:
			strcat(relativePath, "/R-L_Zigzag.png");
			break;
		case 7:
			strcat(relativePath, "/T-Shape.png");
			break;
	}
	
	*tetroidShape = QPixmap(QString(relativePath),nullptr);

	delete(shape);
	delete[](relativePath);
	shape = nullptr;
	relativePath= nullptr;
	return tetroidShape;
}
