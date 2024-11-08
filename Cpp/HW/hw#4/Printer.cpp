#include "Printer.h"

Printer::Printer(string model, string manufacturer, int availableCount) {
	this->model = model;
	this->manufacturer = manufacturer;
	this->printedCount = 0;
	this->availableCount = availableCount;
}


int Printer::print(int page) {
	if (this->availableCount - page >= 0) {
		this->availableCount -= page;
		this->printedCount += page;
		cout << "프린트하였습니다." << endl;
		return 1;
	}
	cout << "용지가 부족하여 프린트할 수가 없습니다." << endl;
}