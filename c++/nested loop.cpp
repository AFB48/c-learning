#include <iostream>
#include "projects.h"
using namespace std;

void e() {
	int number;
	int sum = 0;

	// nested for loops

	// first loop
	for (int i = 1; i <= 3; i++) {
		// second loop
		for (int j = 1; j <= 3; j++) {
			if (j == 2) {
				continue;
			}
			cout << "i = " << i << ", j = " << j << endl;
		}
	}


}