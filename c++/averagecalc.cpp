#include <iostream>
#include "projects.h"

void f() {

	float num, average, sum = 0.0;
	int i, n;

	std::cout << "Maximum number of inputs: ";
	std::cin >> n;

	for (i = 1; i <= n; ++i)
	{
		std::cout << "Enter n" << i << ": ";
		std::cin >> num;

		if (num < 0.0)
		{
			// Control of the program move to jump:
			goto jump;
		}
		sum += num;
	}

jump:
	average = sum / (i - 1);
	std::cout << "\nAverage = " << average;

}


