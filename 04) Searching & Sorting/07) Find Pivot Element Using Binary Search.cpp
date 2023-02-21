#include <iostream>
using namespace std;

//Find Pivot Element In An Array
int FindPivotElement(int arr[], int size)
{
  int start = 0; //initialize start
  int end = size - 1; //initialize end
  int mid = start + ((end - start) / 2); //we have to write like this instead of mid = ((start + end) / 2) to avoid mid value from getting out of range because some times start + end operation could exceed the integer range i.e; -2^31 to 2^31-1

  while (start < end) //The loop will run untill start is less than end, equal to (=) condition is removed to handle single element array
  {
    if (((mid + 1) < size) && (arr[mid] > arr[mid + 1])) //for a pivot element the element next to it should be smaller and also the range check is handled to avoid out of range exception (here pivot element is considered to be at mid position)
    {
      return mid;
    }
    else if (((mid - 1) >= 0) && (arr[mid] < arr[mid - 1])) //for a pivot element the element next to it should be smaller and also the range check is handled to avoid out of range exception (here pivot element is considered to be at mid + 1 position)
    {
      return mid - 1;
    }

    if (arr[start] < arr[mid]) //if the array is right shifted the element at start will be less than the element at the mid then we have to do right check to find the pivot element
    {
      start = mid;
    }
    else if (arr[start] >= arr[mid]) //if the array is left shifted the element at start will be greater than the element at the mid then we have to do left check to find the pivot element
    {
      end = mid - 1;
    }
    mid = start + ((end - start) / 2);
  }
  
  return start;
}

//Get Array Elements
void GetArrayElements(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << "Enter " << i + 1 << " Element" << endl;
    cin >> arr[i];
  }
}

int main()
{
   int a[100];

  int size = 0;
  cout << "Enter Size Of Array" << endl;
  cin >> size;

  //Get Array Elements
  GetArrayElements(a,size);

  //Find Pivot Element In An Array]
  int result = FindPivotElement(a, size);
  cout << "The Pivot Element Is " << a[result] << endl;
}

// output :
// Enter Size Of Array
// 7
// Enter 1 Element
// 3
// Enter 2 Element
// 4
// Enter 3 Element
// 5
// Enter 4 Element
// 6
// Enter 5 Element
// 7
// Enter 6 Element
// 1
// Enter 7 Element
// 2
// The Pivot Element Is 7
