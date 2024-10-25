#pragma once

#include <stdio.h>
#include <string>

#include "Company.h"

using namespace std;

class Customer {
public:
	// Constructor 
	Customer(string nameC = "", string addressC = "", char typeC = ' ', string VATC = "", int volumeDiscountC = 0) {
		name = nameC;
		address = addressC;
		type = typeC;
		company.setVAT(VATC);
		company.setVolumeDiscount(volumeDiscountC);
	}

	// Destructor
	~Customer() {}

	//getters
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	char getType() {
		return type;
	}

	//setters
	void setName(string nameS) {
		name = nameS;
	}
	void setAddress(string addressS) {
		address = addressS;
	}
	void setType(char typeS) {
		type = typeS;
	}

private:
	char type = ' ';
	string name = "";
	string address = "";

	Company company;
};