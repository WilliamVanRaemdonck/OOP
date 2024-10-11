#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Kabel
{
public:
	Kabel(string kleurC = "", int lengteC = 500) {
		kleur = kleurC;
		lengte = lengteC;
	}

	int getLengte() {
		return lengte;
	}

	string getKleur() {
		return kleur;
	}

	void setLength(int input) {
		lengte = input;
	}

	
private:
	string kleur = "";
	int lengte = 0;
};
