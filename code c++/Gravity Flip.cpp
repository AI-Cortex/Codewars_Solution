// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars Solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Gravity Flip
// link : https://www.codewars.com/kata/5f70c883e10f9e0001c89673

#include <vector>
#include <algorithm>

std::vector<int> flip(const char dir, const std::vector<int>& arr) {
    std::vector<int> v(arr);
    if(dir=='R'){
        sort(v.begin(), v.end());
    }
    else{
        sort(v.begin(), v.end(), std::greater<int>());
    }
    return v;
}