#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QApplication>
#include <QLabel>
#include <QPixmap>
#include <QPushButton>

namespace UI {
	class Window : public QWidget {
		public:
			explicit Window(QWidget *parent = 0);
		public slots:
			void NewGame();
		private slots:
			void PauseMenu();
		private:
			QPushButton *quitBtn;
			QPushButton *gameBtn;
			QLabel *gameTitle;
			QWidget *gameWindow;
			QPushButton *pauseBtn;
	};
}

#endif

