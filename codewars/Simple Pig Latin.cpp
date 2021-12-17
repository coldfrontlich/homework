#include<string>
using namespace std;

bool isLetter(char a) {
  if((a >= 65 && a <= 90) or (a >= 97 && a <= 122)) return true;
  else return false;
}

string pig_it(string str)
{
    string letter;
    bool word = false;
    
    for (int i = 0; i < str.length(); i++) {
      if (!isLetter(str[i])) {
        if(word == true) {
          word = false;
          str.insert(i, letter + "ay");
          i+=3;
        }
      } else if (word == false) {
        word = true;
        letter = str[i];
        str.erase(i, 1);
        i--;
      }
    }

    return word ? str = str + letter + "ay" : str;
}
