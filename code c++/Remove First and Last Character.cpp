// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Remove First and Last Character
// link : https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0

#include <string>

using namespace std;

string sliceString(string str)
{
    return str.substr(1, str.size() - 2);
}