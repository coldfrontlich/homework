#include <string>

std::string get_middle(std::string input) 
{
  std::string out = "";
  if (input.length() % 2 != 0)
  {
    for(unsigned long i = 0; i <= input.length() / 2 ; ++i)
    {
      if (i == input.length() / 2 )
      {
      out += input[i] ; 
      }
    }
    return out;
  } else {
    for(unsigned long i = 0; i < input.length() / 2; ++i)
    {
      if (i == input.length() / 2 - 1)
      {
      out += input[i];
      out += input[i + 1]; 
      }
    }
    return out;
  }
}
