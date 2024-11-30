#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QLabel>
#include <QPushButton>
#include "gamewindow.h"

namespace UI {
	const int MIN_HEIGHT = 500;
	const int MIN_WIDTH = 300;
	
	class Menu : public QWidget {
		public:
			explicit Menu(QWidget *parent = 0);
		public slots:
			void newGame();
		private slots:
			void pauseMenu();
		private:
			QGraphicsView* view;
			Game::GameWindow* game_window;
			QPushButton* quit_btn;
			QPushButton* game_btn;
			QLabel* game_title;
			QPushButton* pause_btn;
	};
}
#endif

