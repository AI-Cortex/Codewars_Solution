// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// name : Evil or Odious
// link : https://www.codewars.com/kata/56fcfad9c7e1fa2472000034

std::string evil(int n)
{
  int t = 0;
  while(n){
    t++;
    n = n & (n-1);
  }
  if(t%2==0)
     return "It's Evil!";
  return "It's Odious!";
}