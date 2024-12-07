// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Flick Switch
// link : https://www.codewars.com/kata/64fbfe2618692c2018ebbddb

std::vector<bool> flick_switch(const std::vector<std::string>& arr)
{
    bool flag = true;
    std::vector<bool> out(arr.size());
    int i = 0;
    for(auto n : arr){
        if(n == "flick")
            flag = !flag;
        out[i++] = flag;

    }

    return out;
}