#include <string>
bool is_square(int n)
{
  if (n == 0)
    return 1;
  if (n < 0)
    return 0;
  if (n > 0){
    for(int i = 1;i <= n;++i){
      if( i * i == n){
        return 1;
      }
    }
    return 0;
  }
}
