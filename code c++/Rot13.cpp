// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Rot13
// Link: https://www.codewars.com/kata/530e15517bc88ac656000716
// Link: https://www.codewars.com/kata/52223df9e8f98c7aa7000062

#include <string>
using namespace std;

string rot13(string msg)
{
    for (int i = 0; i < msg.length(); i++)
    {
        if ('a' <= msg[i] && msg[i] <= 'z')
            msg[i] = (msg[i] - 'a' + 13) % 26 + 'a';

        else if ('A' <= msg[i] && msg[i] <= 'Z')
            msg[i] = (msg[i] - 'A' + 13) % 26 + 'A';
    }
    return msg;
}
