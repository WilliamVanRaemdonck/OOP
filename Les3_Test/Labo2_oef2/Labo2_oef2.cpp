/*
Schrijf een klein stockbeheer programma.

In een magazijn wordt kabel verkocht per meter.

De stock bevat kabel in 5 verschillende kleuren en op rollen van elks 500m.

Schrijf hiervoor een kabel klasse die de naam van de kleur en het aantal resterende meters bevat.

Gebruik default argumenten voor de constructor op de juiste plaats.

Schrijf een programma waarin 20 klanten telkens een random aantal meters kabel koopt van een
random kleur. Houdt er uiteraard rekening mee dat een rol kan opraken. Meldt dit dan ook aan de
klant, zodat deze een andere kleur kan kiezen.

Op het einde wordt per kleur het resterende aantal meters afgedrukt.
*/



#include <iostream>
#include <string.h>
#include <vector>
#include "Kabel.h"

using namespace std;

int main() {
	Kabel kabelRood = { "Rood", 500 };
	Kabel kabelGeel = { "Geel", 500 };
	Kabel kabelGroen = { "Groen", 500 };
	Kabel kabelBlauw = { "Blauw", 500 };
	Kabel kabelPaars = { "Paars", 500 };

	for (int i = 0; i < 20; i++) {
		srand(static_cast<unsigned int>(i));
		int chosenColor = 1 + rand() % 5;
		int chosenLength = 1 + rand() % 200;
		int availableLenght = 0;

		switch(chosenColor) {
		case 1:
			//Rood
			availableLenght = kabelRood.getLengte();
			if (availableLenght >= chosenLength) {
				kabelRood.setLength(availableLenght - chosenLength);
				cout << "customer " << i << " bought " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			else {
				cout << "customer " << i << " couldn't buy " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			break;
		case 2:
			//groen
			availableLenght = kabelGroen.getLengte();
			if (availableLenght >= chosenLength) {
				availableLenght - chosenLength;
				kabelGroen.setLength(availableLenght - chosenLength);
				cout << "customer " << i << " bought " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			else {
				cout << "customer " << i << " couldn't buy " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			break;
		case 3:
			//geel
			availableLenght = kabelGeel.getLengte();
			if (availableLenght >= chosenLength) {
				availableLenght - chosenLength;
				kabelGeel.setLength(availableLenght - chosenLength);
				cout << "customer " << i << " bought " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			else {
				cout << "customer " << i << " couldn't buy " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			break;
		case 4:
			//blauw
			availableLenght = kabelBlauw.getLengte();
			if (availableLenght >= chosenLength) {
				availableLenght - chosenLength;
				kabelBlauw.setLength(availableLenght - chosenLength);
				cout << "customer " << i << " bought " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			else {
				cout << "customer " << i << " couldn't buy " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			break;
		case 5:
			//paars
			availableLenght = kabelPaars.getLengte();
			if (availableLenght >= chosenLength) {
				availableLenght - chosenLength;
				kabelPaars.setLength(availableLenght - chosenLength);
				cout << "customer " << i << " bought " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			else {
				cout << "customer " << i << " couldn't buy " << chosenLength << "m of rope with color " << chosenColor << endl;
			}
			break;
		}

	}

	cout << endl;
	cout << "remaining of color Rood = " << kabelRood.getLengte() << "m" << endl;
	cout << "remaining of color Geel = " << kabelGeel.getLengte() << "m" << endl;
	cout << "remaining of color Groen = " << kabelGroen.getLengte() << "m" << endl;
	cout << "remaining of color Blauw = " << kabelBlauw.getLengte() << "m" << endl;
	cout << "remaining of color Paars = " << kabelPaars.getLengte() << "m" << endl;

	return 0;
}