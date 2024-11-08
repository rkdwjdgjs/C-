#include "LaserPrinter.h"

LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) :Printer(model, manufacturer, availableCount) {
	this->availableToner = availableToner;
}

void LaserPrinter::printLaser(int page) {
	if (print(page) == 1) {
		if (this->availableToner - page >= 0) {
			this->availableToner -= page;
		}
		else {
			cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
		}
	}
}

void LaserPrinter::ShowLaserPrint() {
	cout << this->model << " ," << this->manufacturer << " ,남은 종이 " << this->availableCount << "장 ,남은 토너 " << this->availableToner << endl;
}