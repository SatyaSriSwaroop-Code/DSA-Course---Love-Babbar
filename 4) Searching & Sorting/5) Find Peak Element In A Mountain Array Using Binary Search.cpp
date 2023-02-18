#include <iostream>
using namespace std;

//Find Peak Element In A Mountain Array Using Binary Search
int FindPeakElementInAMountainArray(int arr[], int size)
{
  //initialize start
  int start = 0;
  //initialize end
  int end = size - 1;
  //initialize mid
  int mid = start + ((end - start) / 2); // we have to write like this instead of mid = ((start + end) / 2) to avoid mid value from getting out of range because some times start + end operation could exceed the integer range i.e; -2^31 to 2^31-1
  while (start < end)
  {
    if (arr[mid] < arr[mid + 1]) //check for highest element falls in right part or left part of the mountain
    {
      start = mid + 1; //Right Search
    }
    else
    {
      end = mid; // left search
    }
    mid = start + ((end - start) / 2); //update mid for every iteration
  }
  return end; //you can return here end or start because both will point to peak element at last
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

  int size = 0;
  cout << "Enter Size Of Array" << endl;
  cin >> size;

  //Get Array Elements
  GetArrayElements(a,size);

  //Find Peak Element in a  Mountain Array
  int result = FindPeakElementInAMountainArray(a, size);
 
  cout << "Peak Element In The Mountain Array Is " << result + 1 << " Element" << endl;
}

// Output :
// Enter Size Of Array
// 9
// Enter 1 Element
// 21
// Enter 2 Element
// 32
// Enter 3 Element
// 45
// Enter 4 Element
// 53
// Enter 5 Element
// 34
// Enter 6 Element
// 32
// Enter 7 Element
// 11
// Enter 8 Element
// 10
// Enter 9 Element
// 2
// Peak Element In The Mountain Array Is 4 Element
