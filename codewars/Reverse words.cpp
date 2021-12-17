std::string reverse_words(std::string str)
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
}
