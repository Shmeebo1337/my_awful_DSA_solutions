#include <iostream>
#include <assert.h>
#include "solution.hpp"

int main() {
    std::string argument = "A man, a plan, a canal: Panama";
    Solution mySolution;
    bool test = mySolution.isPalindrome(argument);
    assert(test==true);
    return 0;
}