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
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
}

void LaserPrinter::ShowLaserPrint() {
	cout << this->model << " ," << this->manufacturer << " ,���� ���� " << this->availableCount << "�� ,���� ��� " << this->availableToner << endl;
}