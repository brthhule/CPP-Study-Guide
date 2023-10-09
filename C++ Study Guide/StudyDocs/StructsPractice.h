#pragma once

#include <iostream>

#define StudentsNum 3

//Structs are like classes but have a default as public instead of private. People tend to use them for Plain-Old Data (POD). Structs and classes are basically the same thing-- they can both have methods and variables/data types. People tend to use structs for POD and classes when they need to use methods. Variables are public-- no encapsulation

struct student {
	std::string name;
	int grade;

	void printGrade();
} myClass[StudentsNum];

void printGrade(student s );

//Class
class Student {
	std::string name;
	int grade;

	void printGrade() {

	};
};

//If you are writing code that you want to be associated with an object that you can define and use as a variable, write a class. If you are writing an API or library and you want to wrap up all of the functions and constants so that their names don't clash with anything that the user might have written, use a namespace.Jul 6, 2010. Use a namespace when everything is static

namespace student {
	std::string name;
	int grade;

	void printGrade() {};
}

//Encapsulation:
/*Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting external code.*/

class student1 {
private:
	std::string name;
	int grade;

	std::string getName() {
		return name;
	}//Encapsulation
};