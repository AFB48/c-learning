#include <iostream>
#include "projects.h"



void h() {
	int Num1, Num0, m;
	char array[][10] = { { 1,0,1,1,0,1,0,0,1 }, { 0,0,1,1,1,0,1,0,1,1 } };

	Num1 = 0;
	Num0 = 0;
	m = 0;
	do{
		for (int n : array[m]) {
			switch (n) {
			case(1):
				++Num1;
				break;
			case(0):
				++Num0;
				break;
			}
		}
		++m;
	}
	while (m < 2);
	
	
	std::cout << "\nthere is " << Num1 << " 1's in array";
	std::cout << "\nthere is " << Num0 << " 0's in array";
}