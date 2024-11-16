#include "UI.h"

void UI::printMenu() {
	cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
}

int UI::getIndex() {
	int idx;
	cin >> idx;
	return idx;
}