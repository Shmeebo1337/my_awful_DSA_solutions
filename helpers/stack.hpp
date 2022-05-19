#ifndef STACK_HPP
#define STACK_HPP
#include "myprint.hpp"

template <class T>
class Stack {
    private:
    T* current;
    int max;
    T* data;

    public:
    enum StackMessage {Empty=0};
    Stack(void) {
        max = 10;
        data = new T[max];
        current = &data[0];
    }
    ~Stack() { delete [] data; current = 0;};
    void resize(void);
    void add(T);
    T pop(void);
    inline int getSize() const { return (current - &data[0]);}

};

template <class T>
void Stack<T>::resize(void) {
    max *= 2;
    T* newData = new T[max];
    T* bufferCursor = &data[0];
    T* newBufferCursor = &newData[0];

    while (bufferCursor != current) {
        *newBufferCursor++ = *bufferCursor++;
    }

    delete [] data;
    data = newData;
    newData = 0;
    bufferCursor = 0;
    newBufferCursor = 0;

    print(*current);
    current = &data[ (max/2) ];
    print(*current);
}

template <class T>
void Stack<T>::add(T _data) {
    if (current == &data[max]) {
        std::cout << "At max" << std::endl;
        resize();
    }
    *current = _data;
    current++;
}

template <class T>
T Stack<T>::pop(void) {
    if (current == &data[0]) {
        return StackMessage::Empty;
    }
    return *(--current);
}

#endif