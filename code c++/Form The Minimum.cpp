// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Form The Minimum
// Link: https://www.codewars.com/kata/5ac6932b2f317b96980000ca

#include <vector>
#include <set>
#include <algorithm>

using namespace std;

unsigned long long minValue(vector<int> values)
{
    set<int> unique_digits(values.begin(), values.end());

    vector<int> sorted_digits(unique_digits.begin(), unique_digits.end());

    unsigned long long result = 0;
    for (int digit : sorted_digits)
    {
        result = result * 10 + digit;
    }

    return result;
}