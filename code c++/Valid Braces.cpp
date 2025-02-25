// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Valid Braces
// Link: https://www.codewars.com/kata/5277c8a221e209d3f6000b56

#include <string>
#include <stack>

bool valid_braces(const std::string &braces)
{
    std::stack<char> st;

    for (auto ch : braces)
    {
        if (ch == '(' || ch == '[' || ch == '{')
            st.push(ch);

        else if (!st.empty() && ((ch == ')' && st.top() == '(') ||
                                 (ch == ']' && st.top() == '[') ||
                                 (ch == '}' && st.top() == '{')))
        {
            st.pop();
        }
        else
            return false;
    }
    return (st.empty()) ? true : false;
}
