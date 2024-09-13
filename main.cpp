// #include <QtWidgets/QApplication>
// #include <QPushButton>
#include <QIcon>
#include "mainwindow.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	Window window;
	window.show();

	return app.exec();
}
