// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Stop gninnipS My sdroW!
// Link: https://www.codewars.com/kata/5264d2b162488dc400000001

#include <sstream>
#include <algorithm>

std::string spinWords(const std::string &str)
{
    std::stringstream s(str);
    std::string word, out;

    while (getline(s, word, ' '))
    {
        if (word.size() >= 5)
            std::reverse(word.begin(), word.end());
        out += word + " ";
    }

    return out.substr(0, out.size() - 1);
}
