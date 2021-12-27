/*std::string reverse_words(std::string str)
{
  std::string revers;
  std::string result;
  for (int i = 0; i < str.length(); i++){
    if (str[i] == ' '){
      result += revers;
      result += ' ';
      revers = "";
    }
    else {
      revers = str[i] + revers;
    }
  }
  result += revers;
  return result;
}*/
#include <iostream>
#include <string>

void sw(char& a, char& b)
{
    char tmp = a;
    a = b;
    b = tmp;
}

std::string reverse_words(std::string str)
{
    int ind_1 = 0;
    int ind_2 = 0;
    int lenn = str.length();

    while (ind_2 < lenn)
    {
        while (str[ind_1] == ' '){
          ++ind_1;
        }

        while ((ind_2 != lenn - 1) and (str[ind_2 + 1] != ' ')){
          ++ind_2;
        }

        for (int i = ind_1; i < ind_1 + (ind_2 - ind_1 + 1)/(2); ++i){
          sw(str[i], str[ind_2 - (i - ind_1)]);
        }

        ind_1 = ++ind_2;
    }

    return str;
}
