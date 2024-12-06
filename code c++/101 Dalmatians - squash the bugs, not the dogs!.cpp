// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : 101 Dalmatians - squash the bugs, not the dogs!
// link : https://www.codewars.com/kata/56f6919a6b88de18ff000b36

#include<vector>
#include<string>
using namespace std;

string howManyDalmatians(int number){
    vector<string> dogs = {"Hardly any",
                                "More than a handful!",
                                "Woah that's a lot of dogs!",
                                "101 DALMATIONS!!!"};
    
    return number <= 10 ? dogs[0]
            : number <= 50 ? dogs[1]
                : number == 101 ? dogs[3]
                    : dogs[2];
}