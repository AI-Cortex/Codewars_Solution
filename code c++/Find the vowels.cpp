// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Find the vowels
// link : https://www.codewars.com/kata/5680781b6b7c2be860000036

#include <vector>
#include <string>
#include <set>

std::vector<int> vowelIndices(const std::string &word)
{
    std::vector<int> res;
    std::set<int> st = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for (size_t i = 0; i < word.size(); i++)
    {
        if (st.find(word[i]) != st.end())
            res.push_back(i + 1);
    }
    return res;
}