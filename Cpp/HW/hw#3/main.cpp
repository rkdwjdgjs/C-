#include "Dept.h"

int countPass(Dept dept) {	// (3)번 문제 답 -> int countPass(Dept &dept)로 변경
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) {
			count++;
		}
	}
	return count;
}

int main(void)
{
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점이상은 " << n << "명" << endl;

	return 0;
}