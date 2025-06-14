// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum of array singles
// link : https://www.codewars.com/kata/59f11118a5e129e591000134

#include <unordered_set>

int repeats(std::vector<int> v)
{
    std::unordered_set<int> st;
    int sum = 0;
    for (auto n : v)
    {
        if (st.count(n))
            sum -= n;
        else
        {
            sum += n;
            st.insert(n);
        }
    }
    return sum;
}