#include <iostream>
#include "projects.h"




void d()
{
	int age;
	std::cout << "input age\n";
	std::cin >> age;  
	while (true) {
		std::cout << age << " ";
		age = age + 1;
		if (age == 100) {
			std::cout << "you are not that old \n";
			break;
		}
		else if (age > 20) {
			break;
			std::cout << "too old!\n";
		}
		else {
			std::cout << "very young!\n";
		}
	}
	for (int i = 1;i<= 3; ++i) {
			std::cout << "Wow, Wow, so cool! \n";
	}
	
}

