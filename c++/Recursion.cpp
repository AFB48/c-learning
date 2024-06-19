// Factorial of n = 1*2*3*...*n
#include <iostream>

using namespace std;

int factorial(int);

void g() {
	int n, result;

	std::cout << "Enter a non-negative number: ";
	std::cin >> n;

	result = factorial(n);
	std::cout << "Factorial of " << n << " = " << result;
	
}

int factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}