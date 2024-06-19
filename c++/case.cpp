#include <iostream>
#include "projects.h"





char in;
float num1, num2, result;
float count = 0;
int i = 1;
int main() {
	std::cout << "do you want to do program A or program B";
	std::cout << "\n NEW PROGRAMS , now supporting\nC D E F G H k L M O  \n";
	std::cin >> in;
	switch (in) {
	case 'A':
	case 'a':

		std::cout << "enter two numers to multiply\n";
		std::cin >> num1 >> num2;
		result = num1 * num2;
		std::cout << "\nresult is  " << result;
		break;
	case 'B':
	case 'b':
		std::cout << "how much numbers do you want to input\n";
		std::cin >> num1;
		for (i = 1; i <= num1; ++i) {
			std::cout << "enter number " << i << " ";
			std::cin >> num2;
			if (num2 == 0) {
				num1 = num1 - 1;
				break;
			}
			count = count + num2;
		}
		result = count / num1;
		std::cout << "average is " << result;
		break;
	case'C': //source.cpp
	case'c':
		c();
		break;
	case'D': //c++.cpp
	case'd':
		d();
		break;
	case'E':
	case'e':
		e();
		break;
	case'F':
	case'f':
		f();
		break;
	case'G':
	case'g':
		g();
		break;
	case'H':
	case'h':
		h();
		break;
	case'K':
	case'k':
		k();
		break;
	case'L':
	case'l':
		l();
		break;
	case'M':
	case'm':
		m();
		break;
	case'O':
	case'o':
		o();
		break;

	default:
		std::cout << "Unsupported program :(";
		break;
	}
}