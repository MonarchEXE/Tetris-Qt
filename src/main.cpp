#include <QIcon>
#include "mainwindow.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	UI::Window* window = new UI::Window(0);
	QGraphicsView* view = new QGraphicsView(window);
	UI::Menu* menu = new UI::Menu(0);

	window->addWidget(menu);
	view->show();
	menu->setWindowTitle("Tetris-Qt");
	menu->show();

	return app.exec();
}
