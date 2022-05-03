#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <unordered_map>
#include <vector>

class Solution {
public:
	bool containsDuplicate(const std::vector<int>& nums) {
		std::unordered_map<int, bool> myMap;
		for (const int i : nums) {
			if (myMap[i]) return true;
			myMap[i] = true;
		}
		return false;
	}

	bool containsDuplicateExponential(const std::vector<int>& nums) {
		for (int i = 1; i < nums.size(); i++) {
			for (int j = 0; j < i; j++) {
				if (nums[i] == nums[j]) {
					std::cout << "Duplicate" << std::endl;
					return true;
				}
			}
		}
		return false;
	}
};

#endif
