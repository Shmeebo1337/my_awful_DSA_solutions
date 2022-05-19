#include <iostream>
#include "solution.hpp"
#include "assert.h"

int main() {
    Solution solution;
    const std::string strGood = "()";
    const std::string strBadOpen = "(";
    const std::string strBadClosed = ")";
    assert(solution.isValid(strGood) == true);
    assert(solution.isValid(strBadOpen) == false);
    assert(solution.isValid(strBadClosed) == false);
    return 0;
}