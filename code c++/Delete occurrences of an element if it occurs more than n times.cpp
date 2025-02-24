// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Delete occurrences of an element if it occurs more than n times
// Link: https://www.codewars.com/kata/554ca54ffa7d91b236000023

#include <map>

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    map<int, int> m;
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (m[arr[i]] > n)
        {
            arr.erase(arr.begin() + i);
            i--;
        }
        else
            m[arr[i]]++;
    }
    return arr;
}