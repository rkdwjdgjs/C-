#include <iostream>
#include "Ram.h"

Ram::Ram() {
	size = 100 * 1024;
	mem[size] = { 0 };
}

Ram::~Ram() {
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int adress) {
	return mem[adress];
}

void Ram::write(int adress, char value) {
	Ram::mem[adress] = value;

}