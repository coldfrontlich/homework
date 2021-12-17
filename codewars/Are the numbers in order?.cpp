bool isAscOrder(std::vector<int> arr)
{
  int count = 0;
  int lenn = arr.size();
  for(int i = 1;i <= lenn;++i){
    if (arr[i] > arr[i-1]){
      count += 1;
    }
  }
  if(count == lenn-1){
    return 1;
  } else{
    return 0;
  }
}
