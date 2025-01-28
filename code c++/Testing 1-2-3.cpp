// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Testing 1-2-3
// Link: https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9

#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    std::vector<std::string> v;
    int i = 1;
    for (auto &line : lines)
    {
        v.push_back(std::to_string(i++) + ": " + line);
    }
    return v;
}