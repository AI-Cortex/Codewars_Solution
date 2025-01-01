// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Vowel Count
// Link: https://www.codewars.com/kata/54ff3102c1bad923760001f3

#include <string>

using namespace std;

int getCount(const string &inputStr)
{
    int num_vowels = 0;
    for (auto &s : inputStr)
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
            num_vowels++;
    return num_vowels;
}
