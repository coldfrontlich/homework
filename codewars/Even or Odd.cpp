std::string even_or_odd(int number) 
{
  std::string answer;
  if (number % 2 == 0)
    answer = "Even";
  if (number % 2 != 0)
    answer = "Odd";
  return answer;
}
