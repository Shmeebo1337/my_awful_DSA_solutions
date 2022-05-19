#ifndef MYPRINT_HPP
#define MYPRINT_HPP
#include <iostream>

template <class T>
void print(T data) {
    try {
        std::cout << data << std::endl;
    } catch (T err) {
        std::cout << "Can't print data" << std::endl;
    }
}

template <class T>
class DebugPrint {
    private:

    public:

};

#endif