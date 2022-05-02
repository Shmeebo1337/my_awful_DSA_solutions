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
};

#endif
