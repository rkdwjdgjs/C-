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
		cout << "����Ʈ�Ͽ����ϴ�." << endl;
		return 1;
	}
	cout << "������ �����Ͽ� ����Ʈ�� ���� �����ϴ�." << endl;
}