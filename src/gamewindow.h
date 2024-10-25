#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QPixmap>
#include <QLabel>
#include <QWidget>
#include <QString>

namespace Game {
	class Tetroid : public QLabel {
		public: 
			explicit Tetroid(QWidget *parent = 0);
		private:
			QPixmap* tetroidShape;
			QPixmap* GetTetroidShape(QPixmap* &tetroidShape);
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
