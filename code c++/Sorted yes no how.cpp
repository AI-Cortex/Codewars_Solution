// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sorted? yes? no? how?
// Link: https://www.codewars.com/kata/580a4734d6df748060000045

#include <algorithm>

std::string is_sorted_and_how(std::vector<int> array)
{
    if (is_sorted(array.begin(), array.end()))
        return "yes, ascending";

    if (is_sorted(array.begin(), array.end(), std::greater<int>()))
        return "yes, descending";

    return "no";
}
