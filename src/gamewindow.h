#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QPixmap>
#include <QLabel>
#include <QWidget>
#include <QString>

namespace Game {
	const int MIN_HEIGHT = 480;
	const int MIN_WIDTH = 200;
	const int TILE_SIZE = 20;

	class Tetroid : public QGraphicsPixmapItem {
		public: 
			explicit Tetroid(QGraphicsItem *parent);
		private:
			int* height;
			int* width;
			QPixmap* tetroid_shape;

			QPixmap* getShape(QPixmap* &tetroid_shape);
			void checkCollisions();
			void keyPressEvent(QKeyEvent* key_press);
	};


	 class GameWindow :public QGraphicsScene {
		public:
			explicit GameWindow(QWidget* parent);
			void displayItems();

		private:
			QGraphicsPixmapItem* grid;
			Tetroid* tetromino;
			QObject* tetris_line; //placeholder, type is not yet chosen
			Tetroid* saved_tetromino;
	};
}
#endif
