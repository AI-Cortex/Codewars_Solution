// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Localize The Barycenter of a Triangle
// link : https://www.codewars.com/kata/5601c5f6ba804403c7000004

#include <utility>
#include <cmath>

using point = const std::pair<double, double>;
std::pair<double, double> barTriang(point p1, point p2, point p3) {
    std::pair<double, double> p;
    p.first = (p1.first + p2.first + p3.first) / 3;
    p.second = (p1.second + p2.second + p3.second) / 3;

    p.first = std::round(p.first * 10000) / 10000;
    p.second = std::round(p.second * 10000) / 10000;
    return p;

}