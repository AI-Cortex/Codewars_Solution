// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Difference of Volumes of Cuboids
// Link: https://www.codewars.com/kata/58cb43f4256836ed95000f97

#include <array>

int findDifference(std::array<int, 3> a, std::array<int, 3> b) {
    return abs(a[0]*a[1]*a[2] - b[0]*b[1]*b[2]);
}