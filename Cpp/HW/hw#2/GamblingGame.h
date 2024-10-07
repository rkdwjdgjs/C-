#include <iostream>
using namespace std;
#include <string>
#include <time.h>

class Player {
	string name;
	int* board = new int[3];	
public:
	string returnName();
	void getName();
	bool playGambling();
};

class GamblingGame {
	Player player[2];
public:
	GamblingGame();
	~GamblingGame();
	void start();
};
