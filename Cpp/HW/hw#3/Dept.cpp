#include "Dept.h"

Dept::Dept(int size) {
	this->size = size;
	scores = new int[size];
}

Dept::~Dept() {
	cout << "���α׷��� ����Ǿ����ϴ�." << endl;
}

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = dept.scores;
}

int Dept::getSize() {
	return size;
}

void Dept::read() {
	cout << getSize() << "�� ���� �Է�>>";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60) {
		return 1;
	}
	return 0;
}