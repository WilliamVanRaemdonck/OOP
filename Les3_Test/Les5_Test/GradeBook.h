#pragma once
#include <string>
#include <array>
#include <iostream>
#include <iomanip>

class GradeBook {
public:
	static const size_t students{ 10 };

	GradeBook(const std::string& name, const std::array<int, students>& gradesArray) : courseName{ name }, grades{ gradesArray } {
		//this codes make the string name end up in coursename
		//and the grades in array in the grades array
	}

	//set
	void setCourseName(const std::string& name) {
		courseName = name;
	}

	//get
	const std :: string & getCourseName() const {
		//eerste const in the main wordt deze waarde ook niet aan gepase
		//tweede const gaat het object niet aanpasses
		return courseName;
	}

	//functions
	void displayMessage() const {
		std::cout << "gradebook\n" << getCourseName() << std::endl;
	}

	void processGrades() const {
		std::cout << "low is = " << getMinimum() << std::endl;

		std::cout << "max is = " << getMaximum() << std::endl;
	}

	int getMinimum() const {
		int lowGrade{100};

		for (int grade : grades) {
			if (grade < lowGrade) {
				lowGrade = grade;
			}
		}
		return lowGrade;
	}

	int getMaximum() const {
		int maxGrade{ 0 };

		for (int grade : grades) {
			if (grade > maxGrade) {
				maxGrade = grade;
			}
		}
		return maxGrade;
	}

private:

	std::string courseName;
	std::array<int, students> grades;

};



