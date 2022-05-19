#ifndef SOLUTION_HPP
#define SOLUTION_HPP
#include <iostream>
#include "../../helpers/stack.hpp"


class Solution {
    private:
    Stack<char> stack;

    public:
    bool isValid(std::string str) {
        for (unsigned int i = 0; i < str.size(); i++) {
            if (str[i] == '(') {
                stack.add('(');
            } else if (str[i] == ')') {
                //if (stack.pop())
            }
        }
        return !((bool) stack.getSize());
    }
};

#endif