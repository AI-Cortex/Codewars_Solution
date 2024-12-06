// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Swap Values
// link : https://www.codewars.com/kata/5388f0e00b24c5635e000fc6

#include <utility>

std::pair<int, int> swap_values(std::pair<int, int> values) {
    int t = values.second;
    values.second = values.first;
    values.first = t;
    return values;
}