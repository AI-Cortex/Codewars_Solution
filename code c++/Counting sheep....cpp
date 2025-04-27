// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Counting sheep...
// link : https://www.codewars.com/kata/54edbc7200b811e956000556

#include <vector>

using namespace std;

int count_sheep(vector<bool> arr)
{
    int n = 0;
    for (auto a : arr)
        n += a;
    return n;
}