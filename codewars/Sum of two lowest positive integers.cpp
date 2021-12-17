#include <vector>
long sumTwoSmallestNumbers(std::vector<int> numbers){
    long min = 100000000000, min_2 = 100000000000;
    if (numbers.size() > 1){
      for (unsigned long i = 0; i < numbers.size(); ++i)
      {
        if ((numbers[i] < min_2) and (numbers[i] >= min)){
          min_2 = numbers[i];
        }
        if (numbers[i] < min){
          min_2 = min;
          min = numbers[i];
        }
      }
      return min + min_2;
    } else {
      return numbers[0];
    }
}
