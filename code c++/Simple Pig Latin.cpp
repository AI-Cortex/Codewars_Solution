// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Simple Pig Latin
// link : https://www.codewars.com/kata/520b9d2ad5c005041100000f

std::string pig_it(std::string str)
{
    std::stringstream ss(str), out;
    std::string word;

    while (ss >> word)
    {
        if (std::isalpha(word[0]))
            out << word.substr(1) << word[0] << "ay ";
        else
            out << word << " ";
    }
    word = out.str();
    word.pop_back();
    return word;
}