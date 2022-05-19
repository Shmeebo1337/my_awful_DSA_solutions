#include <iostream>
#include "assert.h"
#include "stack.hpp"
#include "myprint.hpp"

int main() {
    Stack<char> stack;
    char test = stack.pop();
    assert(test == Stack<char>::StackMessage::Empty);
    stack.add('a');
    stack.add('b');
    stack.pop();
    stack.pop();
    std::cout << stack.getSize() << std::endl;

    return 0;
}