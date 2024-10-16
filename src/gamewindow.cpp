#include "gamewindow.h"

std::string GetTetroidShape() {
	/*
	 * Randomly selects a tetroid shape for game to draw
	 * TODO - Potenitally check for tetroid repitition to keep true(?) randomisation
	 */
	// int type cast handles the rounding
	int shape = std::rand() % 8;
	std::string tetroidShape;
	switch(shape){
		case 1:
			tetroidShape = "~/lib/Tetroids/Cube.png";
			break;
		case 2:
			tetroidShape = "~/lib/Tetroids/L-Inverted.png";
			break;
		case 3:
			tetroidShape = "~/lib/Tetroids/L-R_Zigzag.png";
			break;
		case 4:
			tetroidShape = "~/lib/Tetroids/L-Shape.png";
			break;
		case 5:
			tetroidShape = "~/lib/Tetroids/Long.png";
			break;
		case 6:
			tetroidShape = "~/lib/Tetroids/R-L_Zigzag.png";
			break;
		case 7:
			tetroidShape = "~/lib/Tetroids/T-Shape.png";
			break;
	}
	return tetroidShape;
}

Game::Tetroid::Tetroid(QLabel *parent) :
	QLabel(parent) {
		TetroidShape = GetTetroidShape();
	}
