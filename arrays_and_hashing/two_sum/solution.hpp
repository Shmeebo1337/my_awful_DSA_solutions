#ifndef SOLUTION_HPP
#define SOLUTION_HPP
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> indicies;
        std::unordered_map<int, int> myMap;

        for (int i = 0; i < nums.size(); i++) {
            if (myMap.find(nums[i]) != myMap.end() && target == (2 * nums[i])) {
                indicies.push_back(myMap[nums[i]]);
                indicies.push_back(i);
                return indicies;
            }

            myMap[(target - nums[i])] = i;

            if (myMap.find(nums[i]) != myMap.end() && myMap[nums[i]] != i) {
                indicies.push_back(myMap[nums[i]]);
                indicies.push_back(myMap[(target - nums[i])]);
                return indicies;
            }
        }
        return indicies;
    }
};

#endif