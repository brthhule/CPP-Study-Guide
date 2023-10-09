//Data structures are a feature that can be used to represent databases, especially if we consider the possibility of building arrays of them :


#include "StructsPractice.h"

void printGrade(student s) {
	std::cout << "Grade: " << s.grade;
}

void student::printGrade() {
	std::cout << "Grade: " << grade;
}