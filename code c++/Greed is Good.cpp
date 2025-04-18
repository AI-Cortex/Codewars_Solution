// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Greed is Good
// link : https://www.codewars.com/kata/5270d0d18625160ada0000e4

#include <array>
#include <map>

std::map<std::pair<int, int>, int> m = {
    {{3, 1}, 1000},
    {{3, 6}, 600},
    {{3, 5}, 500},
    {{3, 4}, 400},
    {{3, 3}, 300},
    {{3, 2}, 200},
    {{1, 1}, 100},
    {{1, 5}, 50},
};

int score(const std::array<unsigned, 5> &dice)
{
    std::map<int, int> d;
    for (const auto &i : dice)
        d[i]++;

    int t = 0;
    for (auto &p : d)
        while (p.second > 0)
        {
            if (m[{p.second, p.first}])
            {
                t += m[{p.second, p.first}];
                p.second = 0;
            }

            else
            {
                t += m[{1, p.first}];
                p.second--;
            }
        }

    return t;
}