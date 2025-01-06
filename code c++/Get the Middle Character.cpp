// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Get the Middle Character
// Link: https://www.codewars.com/kata/56747fd5cb988479af000028

std::string get_middle(std::string input)
{
    int mid = input.length() / 2;
    if (input.length() % 2)
        return input.substr(mid, 1);
    return input.substr(mid - 1, 2);
}