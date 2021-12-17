static long findMissing(std::vector<long> list){
  int sumArr = 0, sum;
  for(int i = 0; i < list.size(); i++)
    sumArr += list.at(i);
  sum = (list.at(0) + list.at(list.size()-1)) * (list.size() + 1) / 2;
  return sum - sumArr;
}
