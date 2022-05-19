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

    for (int i = 0; i < 15; i++) {
        std::cout << ((char) (97 + i)) << std::endl;
        stack.add((char) (97 + i));
    }

    return 0;
}