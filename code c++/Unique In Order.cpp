// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Unique In Order
// Link: https://www.codewars.com/kata/54e6533c92449cc251001667

#include <string>
#include <vector>

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T> &iterable)
{
    std::vector<T> result;
    for (size_t i = 0; i < iterable.size(); ++i)
        if (i == 0 || iterable[i] != iterable[i - 1])
            result.push_back(iterable[i]);

    return result;
}
std::vector<char> uniqueInOrder(const std::string &iterable)
{
    std::vector<char> result;
    for (size_t i = 0; i < iterable.size(); ++i)
        if (i == 0 || iterable[i] != iterable[i - 1])
            result.push_back(iterable[i]);
    return result;
}
