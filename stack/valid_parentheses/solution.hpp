#ifndef SOLUTION_HPP
#define SOLUTION_HPP
#include <iostream>
#include "../../helpers/stack.hpp"


class Solution {
    private:

    public:
    bool isValid(std::string str) {
        Stack<char> stack;
        for (unsigned int i = 0; i < str.size(); i++) {
            if (str[i] == '(') {
                stack.add('(');
            }  else if (str[i] == ')') {
                if (stack.getSize() == 0) { return false; }
                stack.pop();
            }
        }
        return !((bool) stack.getSize());
    }
};

#endif