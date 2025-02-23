// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: The Vowel Code
// Link: https://www.codewars.com/kata/53697be005f803751e0015aa

#include <string>
#include <map>

std::map<char, char> d{
    {'a', '1'},
    {'e', '2'},
    {'i', '3'},
    {'o', '4'},
    {'u', '5'},
    {'1', 'a'},
    {'2', 'e'},
    {'3', 'i'},
    {'4', 'o'},
    {'5', 'u'},
};

std::string encode(const std::string &str)
{
    std::string s = str;
    for (std::size_t i = 0; i < str.size(); i++)
        if (d[s[i]])
            s[i] = d[s[i]];
    return s;
}

std::string decode(const std::string &str)
{
    std::string s = str;
    for (std::size_t i = 0; i < str.size(); i++)
        if (d[s[i]])
            s[i] = d[s[i]];
    return s;
}
