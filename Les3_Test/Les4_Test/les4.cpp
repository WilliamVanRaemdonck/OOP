#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned int rollDice();

int main() {
	enum class State {CONTINUE, WON, LOST};

	srand(static_cast<unsigned int>(time(0)));

	unsigned int myPoint{ 0 };
	unsigned int sumOfDice{ rollDice() };
	State gameState;

	switch (sumOfDice)
	{
	case 7:
	case 11:
		gameState = State::WON;
		break;

	case 2:
	case 3:
	case 12:
		gameState = State::LOST;
		break;
	default:
		gameState = State::CONTINUE;
		myPoint = sumOfDice;
		cout << "point is " << myPoint << endl;
		break;
	}

	while (State::CONTINUE == gameState)
	{
		sumOfDice = rollDice();

		if (sumOfDice == myPoint) {
			gameState = State::WON;
		}
		else {
			if (sumOfDice == 7) {
				gameState = State::LOST;
			}
		}
	}

	if (State::WON == gameState) {
		cout << "win!" << endl;
	}
	else {
		cout << "lose ;-(" << endl;
	}



	return 0;
}

unsigned int rollDice() {
	int die1{ 1 + rand() % 6 };
	int die2{ 1 + rand() % 6 };
	int sum = { die1 + die2 };

	cout << "die1 = " << die1 << endl;
	cout << "die2 = " << die2 << endl;
	cout << "sum = " << sum << endl;
	cout << endl;
	
	return sum;
}