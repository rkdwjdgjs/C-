#include "InkjetPrinter.h"
#include "LaserPrinter.h"

int main(void)
{
	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;

	InkjetPrinter inkjet("Officejet V40", "HP", 5, 10);
	cout << "잉크젯 : ";
	inkjet.ShowInkjetPrint();

	cout << "레이저 : ";
	LaserPrinter laser("SCX-6x45", "삼성전자", 3, 20);
	laser.ShowLaserPrint();

	cout << endl << endl;

	while (1) {
		int model;
		int page;

		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		cin >> model >> page;

		switch (model) {
			case 1:
				inkjet.printInkJet(page); break;
			case 2:
				laser.printLaser(page); break;
			default:
				cout << "모델을 다시 입력해주세요!!" << endl; continue; break;
		}

		inkjet.ShowInkjetPrint();
		laser.ShowLaserPrint();

		re:
		char choice;

		cout << "계속 프린트 하겠습니까(y/n)>>";
		cin >> choice;
		
		cout << endl << endl;

		switch (choice) {
			case 'n':
				cout << "프로그램을 종료합니다." << endl; return 0;;
			case 'y':
				continue; break;
			default:
				cout << "다시 입력해주세요!!" << endl; goto re; break;
		}

	}


	return 0;
}
