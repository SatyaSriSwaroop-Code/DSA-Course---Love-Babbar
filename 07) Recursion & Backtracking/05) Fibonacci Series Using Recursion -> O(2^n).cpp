#include <iostream>
using namespace std;

//we can use memoization technique and decrease the time complexity of this function

//fibonacci series - 0 1 1 2 3 5 8
int fibonacci(int n)
{  
  if(n == 2){
     return  1;
  }
  else if(n == 1){
    return  0;
  }

  return fibonacci(n-1)+fibonacci(n-2);
}

int main() {
  int n = 6;

  for(int i = 1; i <= n; i++)
    {
      cout << fibonacci(i) << " ";
    }

}
output:
0 1 1 2 3 5
