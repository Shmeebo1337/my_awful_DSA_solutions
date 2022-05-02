#include <iostream>
#include "solution.hpp"
#include <vector>

int main() {
	Solution mySolution;
	std::vector<int> test = {1, 2, 3, 1};
	bool answer = mySolution.containsDuplicate(test);
	if (answer) {
		std::cout << "Correct" << std::endl;
	} else {
		std::cout << "Incorrect" << std::endl;
	}
	return 0;
}
