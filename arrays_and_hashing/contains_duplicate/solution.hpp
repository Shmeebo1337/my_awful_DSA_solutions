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

/*
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() >= 1) return false;
        int max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > max) max = nums[i];
        }
        int arr[max];
        for (int k = 0; k < max; k++) {
            std::cout << k << std::endl;
            arr[k] = 0;
        }
        for (int j = 0; j < nums.size(); j++) {
            arr[nums[j]-1]++;
            if (arr[nums[j]-1] > 1) return true;
        }
        return false;
    }
*/

#endif
