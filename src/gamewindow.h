#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QImage>
#include <QLabel>
#include <QWidget>

namespace Game {
	class Tetroid : public QLabel {
		public: 
			explicit Tetroid(QLabel *parent = 0);
		private:
			QImage* tetroidShape;
			QImage* GetTetroidShape(QImage* &tetroidShape);
			int* height;
			int* width;
	};


	 class GameWindow :public QWidget{
		public:
			explicit GameWindow(QWidget* parent = 0);
		private:
			Tetroid* tetromino;
			QObject* tetrisLine; //placeholder, type is not yet chosen
			Tetroid* savedTetromino;
	};
}
#endif
