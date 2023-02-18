#include <iostream>
using namespace std;

//Linear Search
int LinearSearch(int arr[], int size, int target)
{
   for (int i = 0; i < size; i++)
  {
    if(arr[i] == target)
    {
      return i;
    }
  }
  return -1;
}

//Get Array Elements
void GetArrayElements(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Enter " << i+1 << " Element" << endl;
    cin >> arr[i];
  }
}

int main() {

  int a[100];

  //Get Size OF Array
  int size = 0;
  cout << "Enter Size Of Array" << endl;
  cin >> size;

  //Get Array Elements
  GetArrayElements(a,size);

  //Get Element To Search
  int target = 0;
  cout << "Enter Element To Search" << endl;
  cin >> target;

  //Linear Search
  int result = LinearSearch(a, size, target);

  if(result != -1)
  {
    cout << "Element You Are Searching Is " << result + 1 << " Element" << endl;
  }
  else
  {
    cout << "Element Not Found" << endl;
  }
}

//Output - 1
//Enter Size Of Array
//6
//Enter 1 Element
//13
//Enter 2 Element
//14
//Enter 3 Element
//56
//Enter 4 Element
//33
//Enter 5 Element
//23
//Enter 6 Element
//32
//Enter Element To Search
//2
//Element Not Found

//Output -2
//Enter Size Of Array
//5
//Enter 1 Element
//23
//Enter 2 Element
//-22
//Enter 3 Element
//-46
//Enter 4 Element
//23
//Enter 5 Element
//44
//Enter Element To Search
//-46
//Element You Are Searching Is 3 Element
