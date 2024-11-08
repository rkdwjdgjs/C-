#include "InkjetPrinter.h"
#include "LaserPrinter.h"

int main(void)
{
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;

	InkjetPrinter inkjet("Officejet V40", "HP", 5, 10);
	cout << "��ũ�� : ";
	inkjet.ShowInkjetPrint();

	cout << "������ : ";
	LaserPrinter laser("SCX-6x45", "�Ｚ����", 3, 20);
	laser.ShowLaserPrint();

	cout << endl << endl;

	while (1) {
		int model;
		int page;

		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> model >> page;

		switch (model) {
			case 1:
				inkjet.printInkJet(page); break;
			case 2:
				laser.printLaser(page); break;
			default:
				cout << "���� �ٽ� �Է����ּ���!!" << endl; continue; break;
		}

		inkjet.ShowInkjetPrint();
		laser.ShowLaserPrint();

		re:
		char choice;

		cout << "��� ����Ʈ �ϰڽ��ϱ�(y/n)>>";
		cin >> choice;
		
		cout << endl << endl;

		switch (choice) {
			case 'n':
				cout << "���α׷��� �����մϴ�." << endl; return 0;;
			case 'y':
				continue; break;
			default:
				cout << "�ٽ� �Է����ּ���!!" << endl; goto re; break;
		}

	}


	return 0;
}
