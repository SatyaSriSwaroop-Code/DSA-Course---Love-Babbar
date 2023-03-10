#include <iostream>
using namespace std;

//factorial using recursion
int factorial(int n){
  static int ans;
    if(n >= 1)
     return n * factorial(n-1);
     else
      return 1;
}

int main() {
  int n = 6;
 cout << "Factorial of " << n << " is: " << factorial(n) << endl;
}

output:
Factorial of 6 is: 720
