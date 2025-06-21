// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Sum even numbers
// link : https://www.codewars.com/kata/586beb5ba44cfc44ed0006c3

#include <vector>
#include <numeric>

int sum_even_numbers(const std::vector<double> &seq)
{
    int sum_of_evens = std::accumulate(seq.begin(), seq.end(), 0,
                                       [](int acc, double x)
                                       {
                                           if (x == int(x))
                                               return acc + (int(x) % 2 == 0 ? int(x) : 0);
                                           return acc;
                                       });
    return sum_of_evens;
}