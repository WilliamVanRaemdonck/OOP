#pragma once

#include <stdio.h>
#include <string>

#include "Article.h"
#include "Customer.h"

#define MAX_ARTICLES 50
#define MAX_CUSTOMERS 50
#define MAX_INVOICES 50

using namespace std;

class TireCenter {
public:
	// Constructor
	TireCenter(const string& NameC = "", const string& addressC = ""){
		name = NameC;
		address = addressC;
	}

	// Destructor
	~TireCenter() {   }

	// Setters
	void setName(const string& nameS) {
		name = nameS;
	}
	void setAddress(const string& addressS) {
		address = addressS;
	}

	// Getters
	string getName() const {
		return name;
	}
	string getAddress() const {
		return address;
	}

private:
	string name = "";
	string address = "";
	Article articles[MAX_ARTICLES];
	Customer customers[MAX_CUSTOMERS];
	Invoice invoices[MAX_INVOICES];
};