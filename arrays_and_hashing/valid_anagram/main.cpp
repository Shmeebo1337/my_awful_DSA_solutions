#include <iostream>
#include <assert.h>
#include "solution.hpp"

int main() {
    Solution mySolution;
    bool test = mySolution.isAnagram("catt", "taco");
    assert(test == true);
    return 0;
}