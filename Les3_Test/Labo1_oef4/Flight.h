#pragma once
#include <string.h>

class Flight {
public:
    // Getters
    int getVertrekTijd() const {
        return vertrekTijd;
    }

    std::string getBestemming() const {
        return bestemming;
    }

    // Setters
    void setVertrekTijd(int vertrekTijdC) {
        vertrekTijd = vertrekTijdC;
    }

    void setBestemming(const std::string& bestemmingC) {
        bestemming = bestemmingC;
    }

private:
	int vertrekTijd = 0;
	std::string bestemming = "";
};