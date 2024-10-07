#include "GamblingGame.h"


void Player::getName() {
	cin >> this->name;
}

string Player::returnName() {
	return this->name;
}

bool Player::playGambling() {

	for (int i = 0; i < 3; i++) {
		board[i] = rand() % 3;
		cout << board[i] << '\t';
	}
	for (int i = 0; i < 2; i++) {
		if (board[i] != board[i + 1])
			return false;
	}
	delete[] board;
	return true;
}

GamblingGame::GamblingGame() {
	cout << "****** �׺� ������ �����մϴ�. ******" << endl;
	cout << "ù��° ���� �̸�>>";
	player[0].getName();
	cout << "�ι�° ���� �̸�>>";
	player[1].getName();
}

GamblingGame::~GamblingGame() {
	cout << "������ �����մϴ�." << endl;
}

void GamblingGame::start() {

	bool isCompleted = true;

	while (isCompleted) {
		srand((unsigned)time(NULL));
		for (int i = 0; i < 2; i++) {
			cout << player[i].returnName() << ":" << "<ENTER>";
			getchar();
			cout << endl;
			if (player[i].playGambling()) {
				cout << player[i].returnName() << "���� �¸�!!" << endl;
				isCompleted = false;
				break;
			}
			else {
				cout << "�ƽ�����!" << endl;
			}
		}

	}
}