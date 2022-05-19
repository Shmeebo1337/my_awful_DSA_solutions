#ifndef SOLUTION_HPP
#define SOLUTION_HPP
#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        if (s.size() < 3) return false;

        char* ptrDown = 0;
        char* ptrUp = 0;
        std::string str = "";

        for (const char& c : s) {
            if ('a' <= c && c <= 'z') {
                str += c;
            }
            if ('A' <= c && c <= 'Z') {
                str += (c + 32);
            }
        }

        ptrDown = (str.size() % 2 == 0) ? &str[(str.size() / 2 - 1)] : &str[str.size() / 2];
        //ptrUp = (str.size() % 2 == 0) ? &str[str.size() / 2] : &str[str.size() / 2];
        ptrUp = &str[str.size() / 2];
        if (str.size() % 2 != 0) {
            std::cout << str.size() / 2 << std::endl;
        }

        while (*ptrDown && *ptrUp) {
            if (*ptrDown-- != *ptrUp++) {
                return false;
            }
        }
        return true;
    }

    bool isPalindrome2(std::string s) {
        std::string str = "";

        for (const char& c : s) {
            if ('a' <= c && c <= 'z') {
                str += c;
            }
            if ('A' <= c && c <= 'Z') {
                str += (c + 32);
            }
        }

        if (str.size() < 3) return false;
        int down = (str.size() % 2 == 0) ? str.size() / 2 - 1 : str.size() / 2;

        return false;
    }
};

#endif