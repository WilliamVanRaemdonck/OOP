#include <iostream>
#include <string.h>
#include "User.h"

using namespace std;

int main() {
	User user1;
	User user2;

	std::string inputVoornaam;
	std::string inputAchternaam;
	std::string inputAdres;
	std::string inputMail; 
	int inputGeboortejaar;


    // Input for User 1
    std::cout << "Voornaam user 1:\r\n";
    std::cin >> inputVoornaam;
    user1.setVoornaam(inputVoornaam);

    std::cout << "Achternaam user 1:\r\n";
    std::cin >> inputAchternaam;
    user1.setAchternaam(inputAchternaam);

    std::cout << "Adres user 1:\r\n";
    std::cin >> inputAdres;
    user1.setAdres(inputAdres);

    std::cout << "Email user 1:\r\n";
    std::cin >> inputMail;
    user1.setEmail(inputMail);

    std::cout << "Geboortejaar user 1:\r\n";
    std::cin >> inputGeboortejaar;
    user1.setGeboortejaar(inputGeboortejaar);

    // Input for User 2
    std::cout << "Voornaam user 2:\r\n";
    std::cin >> inputVoornaam;
    user2.setVoornaam(inputVoornaam);

    std::cout << "Achternaam user 2:\r\n";
    std::cin >> inputAchternaam;
    user2.setAchternaam(inputAchternaam);

    std::cout << "Adres user 2:\r\n";
    std::cin >> inputAdres;
    user2.setAdres(inputAdres);

    std::cout << "Email user 2:\r\n";
    std::cin >> inputMail;
    user2.setEmail(inputMail);

    std::cout << "Geboortejaar user 2:\r\n";
    std::cin >> inputGeboortejaar;
    user2.setGeboortejaar(inputGeboortejaar);

    //--------------------------------

    user1.printBerekendeLeeftijd();

    user2.printBerekendeLeeftijd();

    user1.printGegevens();

    user2.printGegevens();




	return 0;
}