// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Minimize  Sum Of Array (Array Series #1)
// link : https://www.codewars.com/kata/5a523566b3bfa84c2e00010b

#include <vector>

using namespace std;

int minSum(vector<int> passed)
{
    sort(passed.begin(), passed.end());
    int len = passed.size();
    int sum = 0;

    for (int i = 0; i < len / 2; i++)
    {
        sum += passed[i] * passed[len - i - 1];
    }
    return sum;
}