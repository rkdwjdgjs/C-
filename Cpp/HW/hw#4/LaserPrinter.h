#ifndef LASERPRINTER_H
#define LASERPRINTER_H
#include "Printer.h"

class LaserPrinter : protected Printer {
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int availableToner);
	void printLaser(int page);
	void ShowLaserPrint();
};

#endif