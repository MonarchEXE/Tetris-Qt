#include <QIcon>
#include "mainwindow.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	UI::Menu* menu = new UI::Menu(0);

	menu->setWindowTitle("Tetris-Qt");
	menu->setWindowTitle("Tetris-Qt [DEBUG]");
	menu->show();

	return app.exec();
}
