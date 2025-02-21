// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Count the smiley faces!
// Link: https://www.codewars.com/kata/583203e6eb35d7980400002a

int countSmileys(std::vector<std::string> arr)
{
    int t = 0;
    for (const auto &s : arr)
        if (s.size() == 3)
        {
            if ((s[0] == ':' || s[0] == ';') &&
                (s[1] == '~' || s[1] == '-') &&
                (s[2] == ')' || s[2] == 'D'))
                t++;
        }
        else
        {
            if ((s[0] == ':' || s[0] == ';') &&
                (s[1] == ')' || s[1] == 'D'))
                t++;
        }

    return t;
}
