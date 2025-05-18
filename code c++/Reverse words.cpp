// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Reverse words
// link : https://www.codewars.com/kata/5259b20d6021e9e14c0010d4

#include <string>
#include <algorithm>

std::string reverse_words(std::string str)
{
    std::string word, out;

    for (auto ch : str)
    {
        if (ch == ' ')
        {
            out += word + ' ';
            word.clear();
        }
        else
            word = ch + word;
    }
    if (word.size() > 0)
        out += word;

    return out;
}