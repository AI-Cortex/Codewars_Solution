// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Sort and Star
// link : https://www.codewars.com/kata/57cfdf34902f6ba3d300001e

#include <vector>
#include <string>
#include <algorithm>

std::string twoSort(std::vector<std::string> s)
{
    std::sort(s.begin(), s.end());

    std::string result;
    for (int i = 0; i < s[0].size(); ++i) {
        result += s[0][i];
        if (i < s[0].size() - 1) {
            result += "***"; 
        }
    }

    return result;
}
