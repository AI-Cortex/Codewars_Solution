// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Wilson primes
// Link: https://www.codewars.com/kata/55dc4520094bbaf50e0000cb

bool amIWilson(unsigned n) {
  if(n<3)
      return false;
  unsigned f = 1;
  unsigned d = n*n;
  for(int i=2; i<n; i++)
      f = f*i%d;
  return f+1 == d;  
}
