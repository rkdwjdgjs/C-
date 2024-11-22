#include "GraphicEditor.h"

GraphicEditor::GraphicEditor() {
	cout << "�׷��� �������Դϴ�." << endl;
//	pStart = pLast = NULL;

}

GraphicEditor::~GraphicEditor() {
	for (int i = 0; i < v.size(); i++) delete v[i];
}

void GraphicEditor::printInsert() {
	while (1) {
//		Shape* p = NULL;
		cout << "��:1, ��:2, �簢��:3 >> ";
		int insertIdx = UI::getIndex();

		switch (insertIdx) {
		case 1:
//			p = new Line();
			v.push_back(new Line());
			break;
		case 2:
//			p = new Circle();
			v.push_back(new Circle());
			break;
		case 3:
//			p = new Rect();
			v.push_back(new Rect());
			break;
		default:
			cout << "�ٽ� �Է����ּ���!!" << endl;
			break;
		}
/*		if (pStart == NULL) {
			pStart = p;
			pLast = p;
		}
		else {
			pLast->add(p);
			pLast = pLast->getNext();
		}
*/
		if (insertIdx == 1 || insertIdx == 2 || insertIdx == 3) break;
	}
}

void GraphicEditor::printRemove() {

	while (1) {
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		int removeIdx = UI::getIndex();

//		Shape* p = pStart;
//		Shape* q = pStart;
//		if (pStart == NULL) {
		if(v.empty()){
			cout << "������ ������ �����ϴ�!!" << endl;
			break;
		}
		else {
			v.erase(v.begin() + removeIdx);
			break;
		}


/*
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
*/
	}
}

void GraphicEditor::printAll() {
//	Shape* p = pStart;
	for (int i = 0; i < v.size(); i++) {
		cout << i << ": ";
		v[i]->paint();
	}
	
/*	while (p != NULL) {
		cout << i++ << ": ";
		p->paint();
		p = p->getNext();
	}
*/
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
			cout << "�׷��� �����Ͱ� ����Ǿ����ϴ�." << endl;
			end = true;
			break;
		default:
			cout << "�ٽ� �Է����ּ���!!" << endl << endl;
			break;
		}

		if (end) break;

	}

}