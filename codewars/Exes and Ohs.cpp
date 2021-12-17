bool XO(const std::string& str)
{
  int x = 0;
  int o = 0;
  for (unsigned long i = 0; i < str.length(); ++i)
  {
    if ((str[i] == 'x') or (str[i] == 'X')) x += 1;
    if ((str[i] == 'o') or (str[i] == 'O')) o += 1;
  }
  if (x == o) return true;
  if (x != o) return false;
}
