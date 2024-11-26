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
	const int MIN_WIDTH = 220;
	class Window : public QGraphicsScene {
		public:
			explicit Window(QObject* parent = 0);
	};
	class Menu : public QWidget {
		public:
			explicit Menu(QWidget *parent = 0);
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

