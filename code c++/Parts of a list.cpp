// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Parts of a list
// link : https://www.codewars.com/kata/56f3a1e899b386da78000732

class PartList
{
public:
    static std::vector<std::pair<std::string, std::string>> partlist(std::vector<std::string> &arr)
    {
        std::vector<std::pair<std::string, std::string>> v;
        std::string s;
        for (auto ss : arr)
            s += ss + " ";
        s.pop_back();
        std::string a, b = s;
        for (size_t i = 0; i < arr.size() - 1; i++)
        {
            if (a != "")
                a += " ";
            a += b.substr(0, arr[i].size());
            b = b.substr(arr[i].size() + 1);
            v.push_back({a, b});
        }
        return v;
    }
};