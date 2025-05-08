// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Decode the Morse code
// link : https://www.codewars.com/kata/54b724efac3d5402db00065e

#include <string>

std::string decodeMorse(const std::string &morseCode)
{
    std::string s, word;
    int space = 0;
    for (auto ch : morseCode)
    {
        if (ch != ' ')
        {

            if (space)
            {
                if (word.size() > 0)
                    if (space == 1)
                        s += MORSE_CODE[word];
                    else
                        s += MORSE_CODE[word] + " ";

                word.clear();
                space = 0;
            }
            word.push_back(ch);
        }
        else
            space++;
    }
    if (word.size() > 0)
        s += MORSE_CODE[word];
    return s;
}