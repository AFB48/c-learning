#include <iostream>
#include <string>
#include "projects.h"

void l() {
	std::string city1 = "Paris";

	// create a reference to the variable
	std::string& ref_city = city1;

	// display the variable
	std::cout << "city1 = " << city1 << "\n";
	std::cout << "ref_city = " << ref_city << "\n";

	std::string city2 = "New York";

	// trying to modify the ref_city reference variable to refer to city2
	// but it assigns the value of city2 to the variable city1
	ref_city = city2;

	// display the variables
	std::cout << "\n" << "city1 = " << city1 << "\n";
	std::cout << "city2 = " << city2 << "\n";
	std::cout << "ref_city = " << ref_city << "\n";
}