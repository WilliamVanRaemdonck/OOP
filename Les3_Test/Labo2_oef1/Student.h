#pragma once
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class  Student
{
public:
	Student(string nameC = "", int pointsC[5] = nullptr) {
		//random instellen
		srand(static_cast<unsigned int>(time(0)));

		//name instellen
		name = nameC;

		if (pointsC == nullptr) {
			//give random points
			for (int i = 0; i < 5; ++i) {
				points[i] = 1 + rand() % 20;
			}
		}
	}

	string getStudentName() {
		return name;
	}

	int* getStudentPoints() {
		return points;
	}

private:
	string name = "";
	int points[5];
};