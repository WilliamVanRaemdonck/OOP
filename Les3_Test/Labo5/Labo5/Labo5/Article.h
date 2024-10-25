#pragma once
#include <stdio.h>
#include <string>

using namespace std;

#include "Rim.h";
#include "Tire.h";

class Article {
public:
    // Constructor
    Article(const string& nameC = "", const string& manufacturerC = "", int stockC = 0, int diameterC = 0, float priceC = 0.0f, char typeC = ' ') {
        name = nameC;
        manufacturer = manufacturerC;
        stock = stockC;
        diameter = diameterC;
        price = priceC;
        type = typeC;
    }

    // Deconstructor
    ~Article(){}

    // Getters
    string getName() const {
        return name;
    }

    string getManufacturer() const {
        return manufacturer;
    }

    int getStock() const {
        return stock;
    }

    int getDiameter() const {
        return diameter;
    }

    float getPrice() const {
        return price;
    }

    char getType() const {
        return type;
    }

    // Setters
    void setName(const string& newName) {
        name = newName;
    }

    void setManufacturer(const string& newManufacturer) {
        manufacturer = newManufacturer;
    }

    void setStock(int newStock) {
        stock = newStock;
    }

    void setDiameter(int newDiameter) {
        diameter = newDiameter;
    }

    void setPrice(float newPrice) {
        price = newPrice;
    }

    void setType(char newType) {
        type = newType;
    }
private:
	string name;
	string manufacturer;
	int stock;
	int diameter;
	float price;
	char type;
};