#ifndef INKJETPRINTER_H
#define INKJETPRINTER_H
#include "Printer.h"

class InkjetPrinter :public Printer {
	int availableInk;
public:
	InkjetPrinter(string model, string manufacturer, int availableCount, int availableInk);
	void printInkJet(int page);
	void ShowInkjetPrint();
};

#endif