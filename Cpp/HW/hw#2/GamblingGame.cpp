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
	cout << "****** 겜블링 게임을 시작합니다. ******" << endl;
	cout << "첫번째 선수 이름>>";
	player[0].getName();
	cout << "두번째 선수 이름>>";
	player[1].getName();
}

GamblingGame::~GamblingGame() {
	cout << "게임을 종료합니다." << endl;
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
				cout << player[i].returnName() << "님이 승리!!" << endl;
				isCompleted = false;
				break;
			}
			else {
				cout << "아쉽군요!" << endl;
			}
		}

	}
}