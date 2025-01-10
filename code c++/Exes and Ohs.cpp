// my profile : https://www.codewars.com/users/AI-Cortex
// Codewars solution github repository : https://github.com/AI-Cortex/Codewars_Solution
//////////////////////////////////////////////////////////////////////
// Name: Exes and Ohs
// Link: https://www.codewars.com/kata/55908aad6620c066bc00002a


bool XO(const std::string& str)
{
  int x = 0, o=0;
  for(auto ch : str){
    if('x' == tolower(ch))
        x++;
    else  if('o' == tolower(ch))
        o++;        
  }
  
  if(x==o)
      return true;
  return false;
}