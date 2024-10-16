#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <random>
#include <string>
#include <QLabel>
#include <QPixmap>
#include <QWidget>

std::string GetTetroidShape();

namespace Game {
	 class GameWindow {
		public:
			explicit GameWindow();
		private:
			QWidget *gameWindow;
			QWidget *nextTetroidWindow;
			QWidget *savedTetroidWindow;
			QObject *savedTetroid;
	};

	class Tetroid : public QLabel {
		public: 
			explicit Tetroid(QLabel *parent = 0);
		private:
			std::string TetroidShape;
			int *height;
			int *width;
	};

}
#endif
