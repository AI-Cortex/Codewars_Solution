// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Remove anchor from URL
// Link: https://www.codewars.com/kata/51f2b4448cadf20ed0000386

std::string replaceAll(std::string str)
{
    size_t p = str.find('#');
    if (p == std::string::npos)
        return str;

    return str.substr(0, p);
}