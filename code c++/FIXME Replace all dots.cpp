// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: FIXME: Replace all dots
// Link: https://www.codewars.com/kata/596c6eb85b0f515834000049

#include <regex>
#include <string>

std::string replace_dots(const std::string& str)
{
    return std::regex_replace(str, std::regex{ R"(\.)" }, "-");
}
