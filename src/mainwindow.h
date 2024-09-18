#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QApplication>
#include <QPushButton>
#include <QLabel>

namespace UI {
<<<<<<< HEAD
	class Window : public QWidget {
		public:
			explicit Window(QWidget *parent = 0);
		private:
			QPushButton *quitBtn;
			QPushButton *gameBtn;
			QLabel *gameTitle;
			QWidget *gameWindow;
	};
=======
class Window : public QWidget {
	public:
	explicit Window(QWidget *parent = 0);
	private:
	QPushButton *quitBtn;
	QPushButton *newGameBtn;
	QWidget *gameWindow;
};
>>>>>>> c5a42f8 (feat: quit button added)
}

#endif

