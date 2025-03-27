// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Directions Reduction
// Link: https://www.codewars.com/kata/550f22f4d758534c1100025a

class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
    {
        std::vector<std::string> st;

        for (auto s : arr)
        {
            if (!st.empty() &&
                ((st.back() == "NORTH" && s == "SOUTH") ||
                 (st.back() == "SOUTH" && s == "NORTH") ||
                 (st.back() == "EAST" && s == "WEST") ||
                 (st.back() == "WEST" && s == "EAST")))
            {
                st.pop_back();
            }
            else
                st.push_back(s);
        }
        return st;
    }
};
