#include "Dept.h"

Dept::Dept(int size) {
	this->size = size;
	scores = new int[size];
}

Dept::~Dept() {
	delete[] scores;
}

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[size];
	for (int i = 0; i < this->size; i++) {
		this->scores[i] = dept.scores[i];
	}
}

int Dept::getSize() {
	return size;
}

void Dept::read() {
	cout << getSize() << "개 점수 입력>>";
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