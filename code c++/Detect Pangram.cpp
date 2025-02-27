// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Detect Pangram
// Link: https://www.codewars.com/kata/545cedaa9943f7fe7b000048

#include <string>

bool is_pangram(const std::string &s)
{
    int a[26] = {0};
    for (auto ch : s)
        a[std::tolower(ch) - 'a']++;
        
    for (int i = 0; i < 26; i++)
        if (a[i] == 0)
            return false;

    return true;
}
