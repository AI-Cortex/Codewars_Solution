// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Help the bookseller !
// link : https://www.codewars.com/kata/54dc6f5a224c26032800005c

#include <map>
class StockList
{
public:
    static std::string stockSummary(
        std::vector<std::string> &lstOfArt,
        std::vector<std::string> &categories)
    {
        if (lstOfArt.size() == 0 || categories.size() == 0)
            return "";

        std::map<char, int> m;
        for (auto ch : categories)
            m[ch[0]] = 0;

        for (auto s : lstOfArt)
            if (m.find(s[0]) != m.end())
                m[s[0]] += std::stoi(s.substr(s.find(' ') + 1));

        std::string result = "";
        for (auto ch : categories)
            result += "(" + std::string(1, ch[0]) + " : " + std::to_string(m[ch[0]]) + ") - ";

        return result.substr(0, result.size() - 3);
    }
};