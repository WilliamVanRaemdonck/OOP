#pragma once
#include <string>
#include <iostream>

class User
{
public:
	// Getters
	std::string getVoornaam() const {
		return voornaam;
	}

	std::string getAchternaam() const {
		return achternaam;
	}

	int getGeboortejaar() const {
		return geboortejaar;
	}

	std::string getAdres() const {
		return adres;
	}

	std::string getEmail() const {
		return email;
	}

	// Setters
	void setVoornaam(const std::string& voornaamC) {
		voornaam = voornaamC;
	}

	void setAchternaam(const std::string& achternaamC) {
		achternaam = achternaamC;
	}

	void setGeboortejaar(const int geboortejaarC) {
		geboortejaar = geboortejaarC;
	}

	void setAdres(const std::string& adresC) {
		adres = adresC;
	}

	void setEmail(const std::string& emailC) {
		email = emailC;
	}

	//----------------------------------------

	void printBerekendeLeeftijd() {
		leeftijd = 2024 - geboortejaar;
		std::cout << "De leeftijd is " << leeftijd << "\r\n";
	}

	// Print all user details
	void printGegevens() const {
		std::cout << "Voornaam: " << voornaam << "\r\n";
		std::cout << "Achternaam: " << achternaam << "\r\n";
		std::cout << "Adres: " << adres << "\r\n";
		std::cout << "Leeftijd:: " << leeftijd << "\r\n";
		std::cout << "Email: " << email << "\r\n";
	}


private:
	std::string voornaam = "";
	std::string achternaam = "";
	int geboortejaar = 0;
	std::string adres = "";
	std::string email = "";
	int leeftijd = 0;
};
