// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: The highest profit wins!
// Link: https://www.codewars.com/kata/559590633066759614000063

#include <utility>
#include <vector>
#include <algorithm>

std::pair<int, int> min_max(const std::vector<int>& arr)
{
    int min_,max_;
    min_ = max_ = arr[0];
    int len = arr.size();
    for(int i=1; i<len ; i++){
        min_ = std::min(min_, arr[i]);
        max_ = std::max(max_, arr[i]);
    }

    return { min_, max_ };
}