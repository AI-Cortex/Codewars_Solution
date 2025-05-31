// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Remove duplicate words
// link : https://www.codewars.com/kata/5b39e3772ae7545f650000fc

#include <string>
#include <sstream>
#include <unordered_set>

std::string removeDuplicateWords(const std::string &str)
{
    std::string s, sentence;
    std::stringstream ss(str);
    std::unordered_set<std::string> st;

    while (ss >> s)
        if (st.count(s) == 0)
        {
            sentence += s + " ";
            st.insert(s);
        }

    if (sentence.size() > 0)
        sentence.pop_back();

    return sentence;
}