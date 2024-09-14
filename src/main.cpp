#include <QIcon>
#include "mainwindow.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

	UI::Window window;
	window.show();

	return app.exec();
}
