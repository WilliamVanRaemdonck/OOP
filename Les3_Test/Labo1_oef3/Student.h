#pragma once
#include <string>
#include <iostream>

/*
Oefening 3

Een klas bestaat uit een onbekend aantal studenten (max 20) die allen 3 vakken volgen.

Schrijf een programma dat eerst de namen van de studenten en de behaalde punten per vak vraagt.
Daarna worden de studenten weergegeven wiens gemiddelde hoger is dan het gemiddelde van de klas.

Maak hiervoor een klasse Student aan die per student de naam en de scores bevat.
Deze klasse bevat ook een functie voor het berekenen van het gemiddelde van de student.
Sla de student-objecten op in een array.

*/


class Student {
public:

    // Getters
    std::string getNaam() const {
        return naam;
    }

    int getScoreVak1() const {
        return scoreVak1;
    }

    int getScoreVak2() const {
        return scoreVak2;
    }

    int getScoreVak3() const {
        return scoreVak3;
    }

    int getAverage() const {
        return average;
    }

    // Setters
    void setNaam(const std::string& naamC) {
        naam = naamC;
    }

    void setScoreVak1(int score) {
        scoreVak1 = score;
    }

    void setScoreVak2(int score) {
        scoreVak2 = score;
    }

    void setScoreVak3(int score) {
        scoreVak3 = score;
    }

	void calculateAverage() {
		average = (scoreVak1 + scoreVak2 + scoreVak3) / 3;
	}
private:
	std::string naam = "";
	int scoreVak1 = 0;
	int scoreVak2 = 0;
	int scoreVak3 = 0;
	int average = 0;
};