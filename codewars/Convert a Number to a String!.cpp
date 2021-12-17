#include <string>

std::string number_to_string(int num) {
  std::string out = "";
  std::string str1 = "";
  int chislo;
  if (num < 0)
  {
    out += "-";
    num *= (-1);
  }
  while (num != 0)
  { 
    chislo = num % 10;
    if (chislo == 0) str1 += "0";
    if (chislo == 1) str1 += "1";
    if (chislo == 2) str1 += "2";
    if (chislo == 3) str1 += "3";
    if (chislo == 4) str1 += "4";
    if (chislo == 5) str1 += "5";
    if (chislo == 6) str1 += "6";
    if (chislo == 7) str1 += "7";
    if (chislo == 8) str1 += "8";
    if (chislo == 9) str1 += "9";
    num /= 10;
  }
  for (int i = str1.length()-1; i>=0; --i)
    {
      out += str1[i];
    }
  
return out;
}
