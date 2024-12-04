#include "gamewindow.h"
#include <iostream>

const char* TETROMINO_IMAGE_PATH = "/home/kurt/Projects/C++/Tetris/lib/tetrominoes";

Game::Tetroid::Tetroid(QGraphicsItem *parent) :
	QGraphicsPixmapItem(parent) {
		width = new int;
		height = new int;

		tetroid_shape = new QPixmap();	
		this->setPixmap(*Game::Tetroid::getShape(tetroid_shape));
		*height = tetroid_shape->height();
		*width = tetroid_shape->width();

		this->setFlag(QGraphicsItem::ItemIsFocusable);
		this->setFocus();

	}

/******* VIRTUAL FUNCTIONS *******/

// NOTE: Virtual class of QGraphicsItem
void Game::Tetroid::keyPressEvent(QKeyEvent* key_press) {
	// NOTE: tetromino moves left
	if(key_press->key() == Qt::Key_Left && this->x() != 0) {
		this->setX(this->x() - Game::TILE_SIZE);
		return;
	}
	// NOTE: tetromino moves right
	if(key_press->key() == Qt::Key_Right && this->x() + *this->width != Game::MIN_WIDTH) {
		this->setX(this->x() + Game::TILE_SIZE);
		return;
	}
	// NOTE: tetromino moves down
	if(key_press->key() == Qt::Key_Down && this->y() + *this->height != Game::MIN_HEIGHT) {
		this->setY(this->y() + Game::TILE_SIZE);
		return;
	}
	// NOTE: tetromino rotates 90 degrees 
	// BUG: rotates at a centered tile; collision detection is fucked up tho
	if(key_press->key() == Qt::Key_Up) {
		this->setTransformOriginPoint(30, 20);
		int* temp = new int;
		*temp = *this->height;
		*this->height = *this->width;
		*this->width = *temp;
		this->setRotation(this->rotation() + 90);
		delete(temp);
		temp = nullptr;
		return;
	}
	return;
}

/******* PRIVATE FUNCTIONS *******/

QPixmap* Game::Tetroid::getShape(QPixmap* &tetroid_shape) { // BUG - cmake exits; there's a missing library????
/*
 * Randomly selects a tetroid shape for game to draw
 * Tetromino rotation calls for img manipulation
 * TODO: Potenitally check for tetroid repitition to keep true(?) randomisation
 */
// int type cast handles the rounding
	int* shape = new int;
	char* relativePath = new char[100];
	strcpy(relativePath, TETROMINO_IMAGE_PATH);
	*shape = std::rand() % 8;
	switch(*shape){
		// TODO: Update from absolute path to relative path search (or update the const to have the absolute path)
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
	
	*tetroid_shape = QPixmap(QString(relativePath),nullptr);

	delete(shape);
	delete[](relativePath);
	shape = nullptr;
	relativePath = nullptr;
	return tetroid_shape;
}
