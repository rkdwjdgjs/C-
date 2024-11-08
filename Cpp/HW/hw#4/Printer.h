#ifndef PRINTER_H
#define PRINTER_H
#include <iostream>
using namespace std;

class Printer {
protected:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
	Printer(string model, string manufacturer, int availableCount);
	int print(int page);
};

#endif