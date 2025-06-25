// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/codewars_solution
//////////////////////////////////////////////////////////////////////
// name : Going to the cinema
// link : https://www.codewars.com/kata/562f91ff6a8b77dfe900006e

#include <cmath>

class Movie
{
public:
    static int movie(int card, int ticket, double perc)
    {
        int t = 0;
        double a = 0;
        double b = card;
        double price = ticket * perc;
        while (ceil(b) >= a)
        {
            a += ticket;
            b += price;
            price *= perc;
            t++;
        }
        return t;
    }
};