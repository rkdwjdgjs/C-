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
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
}

void InkjetPrinter::ShowInkjetPrint() {
	cout << this->model << " ," << this->manufacturer << " ,���� ���� " << this->availableCount << "�� ,���� ��ũ " << this->availableInk << endl;
}