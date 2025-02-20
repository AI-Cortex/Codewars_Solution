// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Build Tower
// Link: https://www.codewars.com/kata/576757b1df89ecf5bd00073b

#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors)
{
    std::vector<std::string> v(nFloors);
    std::string line(2 * nFloors - 1, ' ');
    int left, right;
    left = right = (2 * nFloors - 1) / 2;

    for (unsigned i = 0; i < nFloors; i++)
    {
        line[left] = line[right] = '*';

        v[i] = line;
        left--;
        right++;
    }

    return v;
}
