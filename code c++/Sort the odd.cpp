// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sort the odd
// Link: https://www.codewars.com/kata/578aa45ee9fd15ff4600090d

#include <algorithm>

class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
        std::vector<int> v;
        for (auto n : array)
            if (n & 1)
                v.push_back(n);
        sort(v.begin(), v.end());

        int len = array.size();
        for (int i = 0, j = 0; i < len; i++)
            if (array[i] & 1)
                array[i] = v[j++];

        return array;
    }
};