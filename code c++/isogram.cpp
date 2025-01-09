// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Isograms
// Link: https://www.codewars.com/kata/54ba84be607a92aa900000f1

#include <string>

bool is_isogram(const std::string &str)
{
    int a[26] = {0};
    for (auto ch : str)
    {
        a[tolower(ch) - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        if (a[i] > 1)
            return false;
    return true;
}