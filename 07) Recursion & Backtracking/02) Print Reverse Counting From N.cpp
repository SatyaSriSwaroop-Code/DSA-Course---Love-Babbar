#include <iostream>
using namespace std;

//PrintCounting
void printcounting(int n)
{
  if(n != 0){
    cout << n << " ";
    printcounting(n-1);
  }
}

int main() {
  int n = 6;
  printcounting(n);
}

output:
6 5 4 3 2 1
