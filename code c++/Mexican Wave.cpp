// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Mexican Wave
// Link: https://www.codewars.com/kata/58f5c63f1e26ecda7e000029

std::vector<std::string> wave(std::string y)
{
    std::vector<std::string> v;

    for (size_t i = 0; i < y.size(); i++)
    {
        if (y[i] == ' ')
            continue;
        std::string temp = y;
        temp[i] = std::toupper(temp[i]);
        v.push_back(temp);
    }
    return v;
}