#include <iostream>
using namespace std;

//Find Missing Element in an Array Using Binary Search
int FindMissingElement(int arr[], int size)
{
  int start = 0; //initialize start
  int end = size - 1; //initialize end
  int mid = start + ((end - start) / 2); //we have to write like this instead of mid = ((start + end) / 2) to avoid mid value from getting out of range because some times start + end operation could exceed the integer range i.e; -2^31 to 2^31-1

  //Corner Cases
  if (arr[0] != 1)
  {
    return 1;
  }
  if (arr[size - 1] != size + 1)
  {
    return size + 1;
  }
  
  while ((end - start) > 1) //this loop stops when start and end are side by side
  {
    if (arr[mid] - mid != arr[start] - start) //left search - the side which contains the missing element will have difference between its value and position greater than 1
    {
      end = mid; //picking up left search
    }
    else if (arr[mid] - mid != arr[end] - end) //right search - the side which contains the missing element will have difference between its value and position greater than 1
    {
      start = mid; //picking up right search
    }
    mid = start + ((end - start) / 2); //calculate mid for evey iteration
  }
  return arr[start] + 1; //returning the missing element by adding 1 to start or vice versa you can delete 1 from end.
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

  //Find Missing Element in an Array Using Binary Search
  int result = FindMissingElement(a, size);
 
  cout << "The Element Missing In Array Is " << result << endl;
}

// output:
// Enter Size Of Array
// 8
// Enter 1 Element
// 1
// Enter 2 Element
// 2
// Enter 3 Element
// 3
// Enter 4 Element
// 4
// Enter 5 Element
// 5
// Enter 6 Element
// 6
// Enter 7 Element
// 7
// Enter 8 Element
// 9
// The Element Missing In Array Is 8
