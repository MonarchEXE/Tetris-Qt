#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QApplication>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>
#include "gamewindow.h"

namespace UI {
	const int MIN_HEIGHT = 500;
	const int MIN_WIDTH = 220;
	class Window : public QWidget {
		public:
			explicit Window(QWidget *parent = 0);
		public slots:
			void NewGame();
		private slots:
			void PauseMenu();
		private:
			Game::GameWindow* gameWindow;
			QPushButton* quitBtn;
			QPushButton* gameBtn;
			QLabel* gameTitle;
			QPushButton* pauseBtn;
	};
}

#endif

