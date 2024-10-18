#include "gamewindow.h"

Game::GameWindow::GameWindow(QWidget* parent) :
	QWidget(parent) {
		setGeometry(10, 10, 200, 480);
		tetromino = new Tetroid();
		tetromino->show(); // TEST ONLY, DO NOT ACTUALLY KEEP THIS, FUTURE ME
	}

Game::Tetroid::Tetroid(QLabel *parent) :
	QLabel(parent) {
		tetroidShape = GetTetroidShape(tetroidShape);
	}

/******* PRIVATE FUNCTIONS *******/

	QImage* GetTetroidShape(QImage* &tetroidShape) { // BUG - cmake exits; states func is undefined
	/*
	 * Randomly selects a tetroid shape for game to draw
	 * Tetromino rotation calls for img manipulation
	 * TODO - Potenitally check for tetroid repitition to keep true(?) randomisation
	 */
	// int type cast handles the rounding
		int* shape = new int;
		*shape = std::rand() % 8;
		switch(*shape){
			// pretty sure the compiler won't know how to handle '~'
			case 1:
				*tetroidShape = QImage(QString("~/lib/tetrominoes/Cube.png"),nullptr);
				break;
			case 2:
				*tetroidShape = QImage(QString("~/lib/tetrominoes/L-Inverted.png"),nullptr);
				break;
			case 3:
				*tetroidShape = QImage(QString("~/lib/tetrominoes/L-R_Zigzag.png"),nullptr);
				break;
			case 4:
				*tetroidShape = QImage(QString("~/lib/tetrominoes/L-Shape.png"),nullptr);
				break;
			case 5:
				*tetroidShape = QImage(QString("~/lib/tetrominoes/Long.png"),nullptr);
				break;
			case 6:
				*tetroidShape = QImage(QString("~/lib/tetrominoes/R-L_Zigzag.png"),nullptr);
				break;
			case 7:
				*tetroidShape = QImage(QString("~/lib/tetrominoes/T-Shape.png"),nullptr);
				break;
		}
		delete(shape);
		shape = nullptr;
		return tetroidShape;
	}


