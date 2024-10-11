#include <array>
#include "GradeBook.h"


using namespace std;

int main() {
	const array<int, GradeBook::students> grades{
		1,5,3,6,8,20,40,60,80,69 };
	string courseName{ "Mijn balzak" };

	GradeBook myGradeBook(courseName, grades);

	myGradeBook.processGrades();


	return 0;
}