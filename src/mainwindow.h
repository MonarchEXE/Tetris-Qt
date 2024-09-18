#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QApplication>
#include <QPushButton>

namespace UI {
	class Window : public QWidget {
		public:
			explicit Window(QWidget *parent = 0);
		private:
			QPushButton *quitBtn;
			QWidget *gameWindow;
};
}
#endif

