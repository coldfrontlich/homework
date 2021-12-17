int centuryFromYear(int year) 
{
  int first = year / 100;
  if ((year % 100) > 0)
    first += 1;
  return first;
}
