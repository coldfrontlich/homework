std::string no_space(std::string x)
{
  int lenn = x.length();
  std::string neww = "";
  for(int i = 0; i < lenn;++i){
    if (x[i] == ' '){
      neww += "";
    }
    else{
      neww += x[i];
    }
  }
  return neww;
}
