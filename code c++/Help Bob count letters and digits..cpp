// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Help Bob count letters and digits.
// Link: https://www.codewars.com/kata/5738f5ea9545204cec000155

int countLettersAndDigits(std::string input)
{
    int t = 0;
    for (auto ch : input)
        if (isalnum(ch))
            t++;
    return t;
}
