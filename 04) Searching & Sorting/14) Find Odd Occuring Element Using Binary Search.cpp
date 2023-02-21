#include <iostream>
using namespace std;

//Find Odd Occurring Element Using Binary Search
//note: In this array array all the elements occur even number of times except one.
//note: All repeating occurance of elements occur in pairs are not adjacent.

int FindOddOccuringElementUsingBinarySearchd(int arr[], int endIndex)
{
  //initialize
  int start = 0;
  int end = endIndex;
  int mid = start + ((end - start) / 2);

  while (start <= end)
    {
      //if mid is even then we need to check if mid + 1 is same as mid if its same then we are on left side of the number we want so we need to check on right side and vice versa.
      if(start == end)
      {
        return start;
      }
      else if (mid % 2 == 0) //mid is even position
      {
         if (((mid + 1) < end) && (arr[mid] == arr[mid + 1])) // search right side
          {
             start = mid + 2; 
            //mid + 2 beacuse we already checked mid + 1
          }
        else
         {
            end = mid;
           //mid might be the answer
         }
      }
      else if (mid % 2 != 0) //mid is odd position
      {
         if ((((mid - 1) > start)) && (arr[mid] == arr[mid - 1])) // search right side
          {
             start = mid + 1; 
            //mid + 1 beacuse we already checked mid
          }
        else
         {
            end = mid - 1;
           //here mid cannot be the answer because always answer is in even index so mid - 1 can be
         }
      }
      mid = start + ((end - start) / 2);
    }

  return -1;
}

int main() {
   int arr[] = {1,3,3,2,2,-60,-60,1,1};
   int endIndex = (sizeof(arr)/sizeof(arr[0])) - 1;
  
  cout << "Index of the odd occuring element is : " << 
    FindOddOccuringElementUsingBinarySearchd(arr,endIndex);
}
// output :
// Index of the odd occuring element is : 0
