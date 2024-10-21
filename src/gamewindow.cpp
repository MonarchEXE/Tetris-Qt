#include "gamewindow.h"

const char* imgPath = "/home/monac/Projects/C++/Tetris/lib/tetrominoes";

Game::GameWindow::GameWindow(QWidget* parent) :
	QWidget(parent) {
		setGeometry(10, 10, 200, 480);
		tetromino = new Tetroid();
		tetromino->show(); // TEST ONLY, DO NOT ACTUALLY KEEP THIS, FUTURE ME
	}

Game::Tetroid::Tetroid(QLabel *parent) :
	QLabel(parent) {
		tetroidShape = new QPixmap();
		tetroidShape = GetTetroidShape(tetroidShape);
		this->setPixmap(*tetroidShape);
		// It's this function call. This is calling an undefined reference.
	}

/******* PRIVATE FUNCTIONS *******/

	QPixmap* Game::Tetroid::GetTetroidShape(QPixmap* &tetroidShape) { // BUG - cmake exits; there's a missing library????
	/*
	 * Randomly selects a tetroid shape for game to draw
	 * Tetromino rotation calls for img manipulation
	 * TODO - Potenitally check for tetroid repitition to keep true(?) randomisation
	 */
	// int type cast handles the rounding
		int* shape = new int;
		char* relativePath = new char[100];
		strcpy(relativePath, imgPath);
		*shape = std::rand() % 8;
		switch(*shape){
			// pretty sure the compiler won't know how to handle '~'
			// TODO - Update from absolute path to relative path search (or update the const to have the absolute path)
			case 1:
				strcat(relativePath, "/Cube.png");
				// Hey dummy, can't concat const str's together
				break;
			case 2:
				strcat(relativePath, "/L-Inverted.png");
				*tetroidShape = QPixmap(QString(relativePath),nullptr);
				break;
			case 3:
				strcat(relativePath, "/L-R_Zigzag.png");
				*tetroidShape = QPixmap(QString(relativePath),nullptr);
				break;
			case 4:
				strcat(relativePath, "/L-Shape.png");
				*tetroidShape = QPixmap(QString(relativePath),nullptr);
				break;
			case 5:
				strcat(relativePath, "/Long.png");
				*tetroidShape = QPixmap(QString(relativePath),nullptr);
				break;
			case 6:
				strcat(relativePath, "/R-L_Zigzag.png");
				*tetroidShape = QPixmap(QString(relativePath),nullptr);
				break;
			case 7:
				strcat(relativePath, "/T-Shape.png");
				*tetroidShape = QPixmap(QString(relativePath),nullptr);
				break;
		}
		
		*tetroidShape = QPixmap(QString(relativePath),nullptr);

		delete(shape);
		delete[](relativePath);
		shape = nullptr;
		relativePath= nullptr;
		return tetroidShape;
	}


