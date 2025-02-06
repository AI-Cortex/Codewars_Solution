// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Who likes it?
// Link: https://www.codewars.com/kata/5266876b8f4bf2da9b000362

#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names)
{
    int len = names.size();
    if (len == 0)
        return "no one likes this";
    if (len == 1)
        return names[0] + " likes this";
    if (len == 2)
        return names[0] + " and " + names[1] + " like this";
    if (len == 3)
        return names[0] + ", " + names[1] + " and " + names[2] + " like this";

    return names[0] + ", " + names[1] + " and " + std::to_string(len - 2) + " others like this";
}