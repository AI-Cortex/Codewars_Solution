// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Sum of numbers from 0 to N
// Link: https://www.codewars.com/kata/56e9e4f516bcaa8d4f001763

using namespace std;

class SequenceSum
{
    int count;

public:
    SequenceSum(int);
    string showSequence();
};

string SequenceSum::showSequence()
{
    if (count < 0)
        return to_string(count) + "<0";
    if (count == 0)
        return "0=0";
    string s;
    for (int i = 0; i < count; i++)
        s += to_string(i) + "+";

    s += to_string(count) + " = ";
    s += to_string(count * (count + 1) / 2);
    return s;
}

SequenceSum::SequenceSum(int c)
{
    count = c;
}