#include "QtMonitor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtMonitor w;
	w.show();
	return a.exec();
}
