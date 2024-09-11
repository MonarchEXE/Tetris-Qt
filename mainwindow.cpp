#include "mainwindow.h"
void MainWindow() {
	QWidget window;
	window.setFixedSize(100, 240);

	QIcon icon ("/home/kurt/Pictures/BGs/SparkleLiNauu.jpg");
	QPushButton button ("Window test", &window);
	button.setIcon(icon); 
	window.show();

	return;
}
