// my profile : https://codeforces.com/profile/AI-Cortex
// Codeforces solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Find the smallest integer in the array
// link : https://www.codewars.com/kata/55a2d7ebe362935a210000b2

#include <vector>

using namespace std;

int findSmallest(vector<int> list)
{
    int m = list[0];
    for (size_t i = 0; i < list.size(); i++)
        m = min(m, list[i]);
    return m;
}