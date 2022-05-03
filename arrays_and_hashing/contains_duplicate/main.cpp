#include <iostream>
#include "solution.hpp"
#include <vector>
#include <assert.h>

int main() {
	Solution mySolution;
	std::vector<int> test = {1, 2, 3, 4};
	//bool answer = mySolution.containsDuplicate(test);
	bool answer = mySolution.containsDuplicateExponential(test);
	/*
	if (answer) {
		std::cout << "Correct" << std::endl;
	} else {
		std::cout << "Incorrect" << std::endl;
	}*/
	assert(answer==true);
	return 0;
}
