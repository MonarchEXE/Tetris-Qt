#include <QIcon>
#include "mainwindow.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);

<<<<<<< HEAD
	UI::Window window;
	window.setWindowTitle("Tetris-Qt");
=======
	UI::Window window; 
>>>>>>> c5a42f8 (feat: quit button added)
	window.show();

	return app.exec();
}
