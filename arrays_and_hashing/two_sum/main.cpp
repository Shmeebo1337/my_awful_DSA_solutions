#include <iostream>
#include <vector>
#include <assert.h>
#include "solution.hpp"

int main() {
    int target = 6;
    std::vector<int> nums = {3, 3};
    Solution mySolution;

    std::vector<int> test = mySolution.twoSum(nums, target);

    assert(test[0] == 0 && test[1] == 1);

    return 0;
}