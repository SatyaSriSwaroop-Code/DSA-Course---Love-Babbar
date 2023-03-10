#include <iostream>
using namespace std;

//Tail Recursion - All processing happens and then recursion statement comes!!
void TailRecursionPrint(int n)
{
  if(n != 0) //base condition
  {
    cout << n << " "; //processing
    TailRecursionPrint(n-1); //recursion statement
  }
}

int main() {
  int n = 6;

  TailRecursionPrint(n);
  cout << endl;
}

output:
6 5 4 3 2 1
