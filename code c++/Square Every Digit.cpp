// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Square Every Digit
// Link: https://www.codewars.com/kata/546e2562b03326a88e000020

int square_digits(int num)
{
    if (num == 0)
        return 0;

    std::string s;
    int r;
    while (num)
    {
        r = num % 10;
        num /= 10;
        s = std::to_string(r * r) + s;
    }
    return stoi(s);
}