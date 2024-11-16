#include "GraphicEditor.h"

GraphicEditor::GraphicEditor() {
	cout << "그래픽 에디터입니다." << endl;
	pStart = pLast = NULL;

}

void GraphicEditor::printInsert() {
	while (1) {
		Shape* p = NULL;
		cout << "선:1, 원:2, 사각형:3 >> ";
		int insertIdx = UI::getIndex();

		switch (insertIdx) {
		case 1:
			p = new Line();
			break;
		case 2:
			p = new Circle();
			break;
		case 3:
			p = new Rect();
			break;
		default:
			cout << "다시 입력해주세요!!" << endl;
			break;
		}
		if (pStart == NULL) {
			pStart = p;
			pLast = p;
		}
		else {
			pLast->add(p);
			pLast = pLast->getNext();
		}
		if (insertIdx == 1 || insertIdx == 2 || insertIdx == 3) break;
	}
}

void GraphicEditor::printRemove() {

	while (1) {
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		int removeIdx = UI::getIndex();

		Shape* p = pStart;
		Shape* q = pStart;
		if (pStart == NULL) {
			cout << "생성한 도형이 없습니다!!" << endl;
			break;
		}

		for (int i = 1; i < removeIdx; i++) {
			p = q;
			q = q->getNext();
		}

		if (q == pStart) {
			pStart = q->getNext();
			delete q;
			break;
		}
		else {
			p->add(q->getNext());
			delete q;
			break;
		}
	}
}

void GraphicEditor::printAll() {
	Shape* p = pStart;
	int i = 0;
	while (p != NULL) {
		cout << i++ << ": ";
		p->paint();
		p = p->getNext();
	}
}

void GraphicEditor::Start() {
	bool end = false;
	while (1) {
		UI::printMenu();
		int menuIdx = UI::getIndex();

		switch (menuIdx) {
		case 1:
			printInsert();
			break;
		case 2:
			printRemove();
			break;
		case 3:
			printAll();
			break;
		case 4:
			cout << "그래픽 에디터가 종료되었습니다." << endl;
			end = true;
			break;
		default:
			cout << "다시 입력해주세요!!" << endl << endl;
			break;
		}

		if (end) break;

	}

}