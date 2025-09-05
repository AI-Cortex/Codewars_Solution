// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Collect: undefined
// link : https://www.codewars.com/kata/59377c53e66267c8f6000027

#include <string>
#include <unordered_map>
using namespace std;

string alphabetWar(string fight)
{
    std::unordered_map<char, int> left_power = {
        {'w', 4},
        {'p', 3},
        {'b', 2},
        {'s', 1},
        {'m', 0},
        {'q', 0},
        {'d', 0},
        {'z', 0}};
    std::unordered_map<char, int> right_power = {
        {'m', 4},
        {'q', 3},
        {'d', 2},
        {'z', 1},
        {'w', 0},
        {'p', 0},
        {'b', 0},
        {'s', 0},
    };
    int left(0), right(0);
    for (auto ch : fight)
    {
        left += left_power[ch];
        right += right_power[ch];
    }
    if (left > right)
        return "Left side wins!";
    if (left < right)
        return "Right side wins!";

    return "Let's fight again!";
}