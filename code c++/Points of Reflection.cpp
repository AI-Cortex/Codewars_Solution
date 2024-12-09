// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Points of Reflection
// link : https://www.codewars.com/kata/57bfea4cb19505912900012c

#include <utility>

std::pair<int, int> symmetricPoint(const std::pair<int, int>& p,
                                   const std::pair<int, int>& q) {
    
    return {2 * q.first - p.first, 
            2 * q.second - p.second};
}
