// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sort array by string length
// Link: https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c

#include <vector>
#include <string>
#include <algorithm>

bool camp(const std::string &a, const std::string &b)
{
    return a.length() < b.length();
}

std::vector<std::string> sortByLength(std::vector<std::string> array)
{
    sort(array.begin(), array.end(), camp);
    return array;
}