#include <string>
using namespace std ; 

string reverseString (string str )
{
  int lenn = str.length();
  int temp,i,j;
  for(i = 0,j = lenn - 1;i < j;i++,j--){
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  return str;
}

//or
/*
#include <string>
using namespace std ; 

string reverseString (string str )
{
  for (unsigned int i = 0; i < str.length() / 2; ++i)
  {
    char c = str[i];
    str[i] = str[str.length() - 1 - i];
    str[str.length() - 1 - i] = c;
  }
    return str;
}
*/
