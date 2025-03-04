// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Anagram Detection
// Link: https://www.codewars.com/kata/529eef7a9194e0cbc1000255

#include <string>

bool isAnagram(std::string test, std::string original)
{
    int a[26] = {0};
    for (auto ch : test)
        a[std::tolower(ch) - 'a']++;

    for (auto ch : original)
        a[std::tolower(ch) - 'a']--;

    for (int i = 0; i < 26; i++)
        if (a[i] != 0)
            return false;
    return true;
}