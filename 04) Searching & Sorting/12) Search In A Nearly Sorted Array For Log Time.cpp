#include <iostream>
using namespace std;

//search in a nearly sorted array in log time 
int SearchInANearlySortedArray(int arr[], int endIndex, int target)
{
  //initialize
  int start = 0;
  int end = endIndex;
  int mid = start + ((end - start) / 2);

  while (start <= end)
    {
      //we will check mid, left and right of the mid to target.
      if (arr[mid] == target)
      {
        return mid;
      }
      else if ((mid - 1 >= start) && arr[mid - 1] == target)
      {
        return mid - 1;
      }
      else if ((mid + 1 <= end) && arr[mid + 1] == target)
      {
        return mid + 1;
      }
      //left search
      else if (target < arr[mid])
      {
        end = mid - 2;
      }
      //left search
      else if (target > arr[mid])
      {
         start = mid + 2;
      }
      mid = start + ((end - start) / 2);
    }
  return -1;
}

int main() {
  int arr[] = {1,3,2,4,6,5};
  int endIndex = (sizeof(arr)/sizeof(arr[0])) - 1;
  
  cout << "Index of the element is : " << SearchInANearlySortedArray(arr,endIndex,5);
}

// Output:
// Index of the element is : 5
