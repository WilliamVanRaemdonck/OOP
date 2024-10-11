#include <iostream>
#include <string.h>
#include <vector>
#include "Student.h"

#define AMOUNT_OF_STUDENTS 5

using namespace std;

void calculateAverages(vector<Student>, int[AMOUNT_OF_STUDENTS]);

int main() {
	vector<Student> vect;				// Maak een vector aan om 'Student' objecten op te slaan
	int averages[AMOUNT_OF_STUDENTS];	// Array om het gemiddelde per student op te slaan

	// Voeg 5 Student objecten toe aan de vector, met alleen namen en geen punten (nullptr)
	vect.push_back(Student("bob1", nullptr));
	vect.push_back(Student("bob2", nullptr));
	vect.push_back(Student("bob3", nullptr));
	vect.push_back(Student("bob4", nullptr));
	vect.push_back(Student("bob5", nullptr));

	//Roep de functie calculateAverages aan om de gemiddelden te berekenen en af te drukken

	calculateAverages(vect, averages);

	return 0;
}

void calculateAverages(vector<Student> vect, int averages[AMOUNT_OF_STUDENTS]) {
	// Deze variabele houdt de positie in de averages-array bij
	int index = 0;

	// Loop door de vector van studenten met een iterator
	for (auto it = begin(vect); it != end(vect); it++) {
		int sum = 0;

		// Verkrijg de punten van de huidige student
		int* points = it->getStudentPoints();

		for (int j = 0; j < 5; ++j) {
			sum += points[j];
		}
		averages[index] = sum / 5;

		cout << "average of student " << it->getStudentName() << " is " << averages[index] << endl;

		index++;
	}
}

/* kan ook
for (int i = 0; i < vect.size(); ++i) {
	int sum = 0;
	int* points = vect[i].getStudentPoints();
	for (int j = 0; j < 5; ++j) {
		sum += points[j];
	}
	averages[i] = sum / 5;
	cout << "Gemiddelde van student " << vect[i].getStudentName() << " is " << averages[i] << endl;
}
*/
