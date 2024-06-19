
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


int main()
{
	std::vector<int> numbers{ 6, 2, 4, 3, 7, 1, 8, 5 };
	std::vector<int>::iterator itr;
	for (int j = 1; j <= 2; ++j) {

		for (int i = 0; i <= size(numbers); i++) {
			if (i >= size(numbers)) {
				continue;
			}
			itr = numbers.begin() + i;
			std::cout << *itr << " ";
		}
		std::sort(numbers.begin(), numbers.end());
		std::cout << "\n";
	}
	std::cout << "vector is sorted :)\n------------------------------------------------------------------\n------------------------------------------------------------------\n";

	int n1, n2, n3;

	std::queue<int> num;
	std::cout << "enter 3 numbers";
	std::cin >> n1 >> n2 >> n3;
	num.push(n1);
	num.push(n2);
	num.push(n3);

	while (!num.empty()) {
		std::cout << num.front() << " ";
		num.pop();
	}

	return 0;
}

