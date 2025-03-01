// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Don't give me five!
// Link: https://www.codewars.com/kata/5813d19765d81c592200001a

bool f(int n)
{
    std::string s = std::to_string(n);
    for (auto ch : s)
        if (ch == '5')
            return false;
    return true;
}

int dontGiveMeFive(int start, int end)
{
    int t = 0;

    for (int i = start; i <= end; i++)
        if (f(i))
            t++;
    return t;
}
