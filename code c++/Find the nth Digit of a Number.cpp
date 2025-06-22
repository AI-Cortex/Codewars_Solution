// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Find the nth Digit of a Number
// link : https://www.codewars.com/kata/577b9960df78c19bca00007e

int findDigit(int num, int nth)
{
    if (nth < 1)
        return -1;
    num = abs(num);
    std::string s = std::to_string(num);
    if (s.size() < nth)
        return 0;
    return s[s.size() - nth] - '0';
}