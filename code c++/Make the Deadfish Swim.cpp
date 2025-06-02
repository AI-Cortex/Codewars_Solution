// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Make the Deadfish Swim
// link : https://www.codewars.com/kata/51e0007c1f9378fa810002a9

#include <vector>
#include <string_view>

std::vector<int> parse(std::string_view data)
{
    std::vector<int> v;
    long long n = 0;

    for (auto ch : data)
    {
        switch (ch)
        {
        case 'i':
            n++;
            break;
        case 'd':
            n--;
            break;
        case 's':
            n *= n;
            break;
        case 'o':
            v.push_back(n);
            break;
        }
    }
    return v;
}