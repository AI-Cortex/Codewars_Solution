// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Take a Ten Minutes Walk
// Link: https://www.codewars.com/kata/54da539698b8a2ad76000228

#include <vector>
#include <map>

bool isValidWalk(std::vector<char> walk)
{
    if (walk.size() != 10)
        return false;

    std::map<char, int> d = {
        {'n', 0},
        {'e', 0},
    };

    for (auto ch : walk)
    {
        switch (ch)
        {
        case 'n':
            d['n']++;
            break;
        case 's':
            d['n']--;
            break;
        case 'e':
            d['e']++;
            break;
        case 'w':
            d['e']--;
            break;
        }
    }
    return d['n'] == 0 && d['e'] == 0;
}
