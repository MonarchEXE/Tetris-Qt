#include <QIcon>
#include "mainwindow.h"
#include <iostream>

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	UI::Window window;
	window.setWindowTitle("Tetris-Qt");
	window.show();

	return app.exec();
}
