#include <string>

bool isAnagram(std::string test, std::string original){
  int Arr[100] = {0};
  for (unsigned long i = 0; i < test.length(); ++i)
  { 
    if(test[i] > 90)
      {
        Arr[int(test[i]) - 32] += 1;   
      } else {
        Arr[int(test[i])] += 1; 
      }
  }
  int Mass[100] = {0};
  for (unsigned long i = 0; i < original.length(); ++i)
  { 
    if(original[i] > 90)
      {
        Mass[int(original[i]) - 32] += 1;   
      } else {
        Mass[int(original[i])] += 1; 
      }
    }
  bool result = 1;
  for (int i = 0; i < 100; ++i)
  {
    if (Arr[i] != Mass[i])
    {
         result = 0;
         return result;
    }
  }
  return result;
}
