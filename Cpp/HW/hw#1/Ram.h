#include <iostream>
using namespace std;

class Ram {
	char mem[100 * 1024];
	int size;
public:
	Ram();
	~Ram();
	char read(int address);
	void write(int adress, char value);
};
