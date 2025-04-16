// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Reversed Strings
// link : https://www.codewars.com/kata/5168bb5dfe9a00b126000018

#include <string>
#include <algorithm>

using namespace std;

string reverseString(string str)
{
    reverse(str.begin(), str.end());
    return str;
}