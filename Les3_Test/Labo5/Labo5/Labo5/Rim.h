#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Rim {
public:
    // Constructor
    Rim(bool aluminiumC = false, const string& colorC = "", int widthC = 0) {
        aluminium = aluminiumC;
        color = colorC;
        width = widthC;
    }

    // Destructor
    ~Rim() {}

    // Getters
    bool isAluminium() const {
        return aluminium;
    }
    string getColor() const {
        return color;
    }
    int getWidth() const {
        return width;
    }

    // Setters
    void setAluminium(bool AluminiumS) {
        aluminium = AluminiumS;
    }
    void setColor(const string& ColorS) {
        color = ColorS;
    }
    void setWidth(int WidthS) {
        width = WidthS;
    }

private:
	bool aluminium;
	string color;
	int width;
};