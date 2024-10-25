#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Tire {
public:
    // Constructor
    Tire(int widthC = 0, int heightC = 0, const string& speedIndexC = "", char seasonC = ' ') {
        width = widthC;
        height = heightC;
        speedIndex = speedIndexC;
        season = seasonC;
    }

    // Destructor
    ~Tire() {}

    // Getters
    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    string getSpeedIndex() const {
        return speedIndex;
    }

    char getSeason() const {
        return season;
    }

    // Setters
    void setWidth(int newWidth) {
        width = newWidth;
    }

    void setHeight(int newHeight) {
        height = newHeight;
    }

    void setSpeedIndex(const string& newSpeedIndex) {
        speedIndex = newSpeedIndex;
    }

    void setSeason(char newSeason) {
        season = newSeason;
    }
private:
	int width;
	int height;
	string speedIndex;
	char season;
};