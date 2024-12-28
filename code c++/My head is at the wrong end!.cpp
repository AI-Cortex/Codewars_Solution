// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: My head is at the wrong end!
// Link: https://www.codewars.com/kata/56f699cd9400f5b7d8000b55


#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
    std::swap(arr[0], arr[2]);
    return arr;
}