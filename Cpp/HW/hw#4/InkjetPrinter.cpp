#include "InkjetPrinter.h"

InkjetPrinter::InkjetPrinter(string model, string manufacturer, int availableCount, int availableInk) :Printer(model, manufacturer, availableCount) {
	this->availableInk = availableInk;

}

void InkjetPrinter::printInkJet(int page) {
	if (print(page) == 1) {
		if (this->availableInk - page >= 0) {
			this->availableInk -= page;
		}
		else {
			cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
		}
	}
}

void InkjetPrinter::ShowInkjetPrint() {
	cout << this->model << " ," << this->manufacturer << " ,남은 종이 " << this->availableCount << "장 ,남은 잉크 " << this->availableInk << endl;
}