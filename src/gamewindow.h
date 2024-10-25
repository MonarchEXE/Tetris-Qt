#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QPixmap>
#include <QLabel>
#include <QWidget>
#include <QString>

namespace Game {
	class Tetroid : public QLabel {
		public: 
			explicit Tetroid(QWidget *parent);
		private:
			int* height;
			int* width;
			QPixmap* tetroidShape;
			QPixmap* GetTetroidShape(QPixmap* &tetroidShape);
	};


	 class GameWindow :public QWidget{
		public:
			explicit GameWindow(QWidget* parent);
		private:
			Tetroid* tetromino;
			QObject* tetrisLine; //placeholder, type is not yet chosen
			Tetroid* savedTetromino;
	};
}
#endif
