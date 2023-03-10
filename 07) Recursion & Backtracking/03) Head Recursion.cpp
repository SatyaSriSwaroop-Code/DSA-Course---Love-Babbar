#include <iostream>
using namespace std;

//Head Recursion - recursion statement is first and then all processing happens!
void HeadRecursionPrint(int n)
{
  if(n != 0){
    HeadRecursionPrint(n-1);
    cout << n << " ";
  }
}

int main() {
  int n = 6;

  HeadRecursionPrint(n);
  cout << endl;
}

output:
1 2 3 4 5 6
