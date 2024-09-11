// #include <QtWidgets/QApplication>
// #include <QPushButton>
#include <QIcon>
#include "mainwindow.h"

int main(int argc, char **argv) {
	QApplication app(argc, argv);
	 MainWindow();
	 /*
	window.setFixedSize(100, 240);

	QIcon icon ("/home/kurt/Pictures/BGs/SparkleLiNauu.jpg");
	QPushButton button ("Window test", &window);
	button.setIcon(icon); 
	
	// button.show();
	
	window.show();
	*/
	return app.exec();
}
