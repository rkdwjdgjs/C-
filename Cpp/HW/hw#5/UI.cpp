#include "UI.h"

void UI::printMenu() {
	cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
}

int UI::getIndex() {
	int idx;
	cin >> idx;
	return idx;
}