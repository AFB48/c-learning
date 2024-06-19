#include <iostream>
#include "projects.h"

struct person {
	std::string firstname;
	std::string lastname;
	int age;
	float salary;

	void display_info() {
		std::cout << "\nFirst Name: " << this->firstname;
		std::cout << "\nLast Name: " << this->lastname;
		std::cout << "\nAge: " << this->age;
		std::cout << "\nSalary: " << this->salary;
	}

};





void m() {

	person p1;
	std::cout << "enter first name ";
	std::cin >> p1.firstname;
	std::cout << "enter last name ";
	std::cin >> p1.lastname;
	std::cout << "enter age ";
	std::cin >> p1.age;
	std::cout << "enter salary ";
	std::cin >> p1.salary;


	std::cout << "\nDisplaying Information.";
	p1.display_info();
}