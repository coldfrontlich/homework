#include <vector>
using namespace std;
int maxSequence(const vector<int>& arr) {
  int localm=0;
  int globalm=0;
  for (int i = 0;i<arr.size();i++)
  {
    localm = localm + arr[i];
    if (localm > globalm)
      globalm = localm;
    if (localm < 0)
      localm = 0;
  }
  return globalm;
}
