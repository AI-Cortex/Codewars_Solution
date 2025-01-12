// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Complementary DNA
// Link: https://www.codewars.com/kata/554e4a2f232cdd87d9000038

#include <string>
#include <unordered_map>

std::string DNAStrand(const std::string &dna)
{
    std::string s = dna;
    std::unordered_map<char, char> d = {
        {'A', 'T'},
        {'T', 'A'},
        {'C', 'G'},
        {'G', 'C'}};
    int len = dna.size();
    for (int i = 0; i < len; i++)
        s[i] = d[dna[i]];
    return s;
}
