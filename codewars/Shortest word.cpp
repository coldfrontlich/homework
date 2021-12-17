#include <string>
int find_short(std::string text){
std::string word = "";
std::string minword = text;
for(int i=0; i < text.length(); i++){
    if(text[i] != ' '){
        word += text[i];
    }
    else{
        if(word.length() < minword.length())
            minword=word;
        word = "";
    }
}
if(word != ""){
    if(word.length() < minword.length())
        minword=word;
}
  return minword.length();
}
