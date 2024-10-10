#include <iostream>
using namespace std;

class Dept {
	int size;
	int* scores;
public:
	Dept(int size);
	Dept(const Dept& dept);
	~Dept();
	int getSize();
	void read();
	bool isOver60(int index);
};