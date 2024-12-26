// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: The 'if' function
// Link: https://www.codewars.com/kata/54147087d5c2ebe4f1000805


void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
    if(value)
        func1();
    else
        func2();
}