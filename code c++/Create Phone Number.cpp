// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Create Phone Number
// Link: https://www.codewars.com/kata/525f50e3b73515a6db000b83

#include <string>

std::string createPhoneNumber(const int arr[10])
{
    std::string a = std::to_string(arr[0]) + std::to_string(arr[1]) + std::to_string(arr[2]);
    std::string b = std::to_string(arr[3]) + std::to_string(arr[4]) + std::to_string(arr[5]);
    std::string c = std::to_string(arr[6]) + std::to_string(arr[7]) + std::to_string(arr[8]) + std::to_string(arr[9]);
    return "(" + a + ") " + b + "-" + c;
}
