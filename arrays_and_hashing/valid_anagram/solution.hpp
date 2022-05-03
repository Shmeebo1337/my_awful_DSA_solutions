#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if ((s.size() - t.size())) return false;
        std::unordered_map<char, int> myMap;
        for (int i = 0; i < s.size(); i++) {
            myMap[s[i]] += 1;
            myMap[t[i]] -= 1;
        }
        for (const std::pair<char, int> p : myMap) {
            if (p.second != 0) return false;
        }
        return true;
    }
};

#endif