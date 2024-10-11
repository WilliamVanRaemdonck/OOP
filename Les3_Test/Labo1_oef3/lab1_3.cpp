#include <iostream>
#include <string.h>
#include "Student.h"

/*
Oefening 3

Een klas bestaat uit een onbekend aantal studenten (max 20) die allen 3 vakken volgen.

Schrijf een programma dat eerst de namen van de studenten en de behaalde punten per vak vraagt.
Daarna worden de studenten weergegeven wiens gemiddelde hoger is dan het gemiddelde van de klas.

Maak hiervoor een klasse Student aan die per student de naam en de scores bevat. 
Deze klasse bevat ook een functie voor het berekenen van het gemiddelde van de student. 
Sla de student-objecten op in een array.
*/

using namespace std;

int main() {
    Student students[20];

    for (int i = 0; i < 20; ++i) {
        std::string naam = "Student" + std::to_string(i + 1);
        students[i].setNaam(naam);
        students[i].setScoreVak1(80 + i); 
        students[i].setScoreVak2(85 + i);
        students[i].setScoreVak3(90 + i);
        students[i].calculateAverage();
    }

    for (int i = 0; i < 20; ++i) {
        std::cout << "Naam: " << students[i].getNaam() << "\n";
        std::cout << "Average: " << students[i].getAverage() << "\n";
        std::cout << "-------------------------\n";
    }
}
