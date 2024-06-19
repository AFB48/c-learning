// C++ Program to print numbers from 1 to 5

#include <iostream>
#include "projects.h"



void c() {
	int num;

	std::cout << "enter number thats smaller than 50  ";
	std::cin >> num;

	// do...while loop from 1 to 5
	do {
		std::cout << num << " ";
		num = num * 2;
	} while (num <= 50);

	std::cout << "\n" << num << " is now over 50 :(";

	for (int i = 1; i <= 10; i++) {
		// break condition

		if (num == 80) {
			std::cout << "\n damn exactly on 80 tho";
			break;
		}
		if (num % 3 == 0) {
			continue;
		}
		std::cout << "\n" << num;
		++num;


	}



}