// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Highest and Lowest
// Link: https://www.codewars.com/kata/554b4ac871d6813a03000035

#include <string>
#include <sstream>
#include <climits>
using namespace std;

std::string highAndLow(const std::string &numbers)
{
    int max_ = INT_MIN;
    int min_ = INT_MAX;
    stringstream ss(numbers);
    int n;
    while (ss >> n)
    {
        max_ = max(max_, n);
        min_ = min(min_, n);
    }
    return to_string(max_) + " " + to_string(min_);
}