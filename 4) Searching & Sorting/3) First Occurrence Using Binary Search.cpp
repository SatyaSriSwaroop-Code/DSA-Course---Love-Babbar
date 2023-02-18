#include <iostream>
using namespace std;


//Find the First Occurance of The Element
int FirstOccuranceUsingBinarySearch(int arr[], int size, int target)
{
  int start = 0; //initialize start
  int end = size-1; //initialize end
  int mid = start + ((end - start)/2); //initialize mid - we have to write like this instead of mid = ((start + end) / 2) to avoid mid value from getting out of range because some times start + end operation could exceed the integer range i.e; -2^31 to 2^31-1
  int ans = -1; //initialize default not found answer

  while (start <= end) //iteration will end once start moved ahead of end
  {
    if(arr[mid] == target)
    {
      //save answer
      ans = mid;

      //left search
      end = mid - 1;
    }
    else if (arr[mid] < target)
    {
      //right search
      start = mid + 1;
    }
     else if (arr[mid] > target)
    {
     //left search
      end = mid - 1;
    }
    mid = start + ((end - start)/2); //update mid for every iteration
  } 
  return ans;
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

int main() 
{
  int a[100];

  int size = 0;
  cout << "Enter Size Of Array" << endl;
  cin >> size;

  //Get Array Elements
  GetArrayElements(a,size);

  int target = 0;
  cout << "Enter Element To Search" << endl;
  cin >> target;

  //Find the First Occurance of The Element
  int result = FirstOccuranceUsingBinarySearch(a,size,target);
  
  //int result = BinarySearch(a, size, target);
  if(result != -1)
  {
    cout << "First Occurance Of The Element You Are Searching Is " << result + 1 << " Element" << endl;
  }
  else
  {
    cout << "Element Not Found" << endl;
  }
}

//Output-1
// Enter Size Of Array
// 8
// Enter 1 Element
// 1
// Enter 2 Element
// 2
// Enter 3 Element
// 3
// Enter 4 Element
// 3
// Enter 5 Element
// 3
// Enter 6 Element
// 3
// Enter 7 Element
// 4
// Enter 8 Element
// 5
// Enter Element To Search
// 3
// First Occurance Of The Element You Are Searching Is 3 Element

//Output-2
// Enter Size Of Array
// 8
// Enter 1 Element
// 1
// Enter 2 Element
// 3
// Enter 3 Element
// 4
// Enter 4 Element
// 6 
// Enter 5 Element
// 6
// Enter 6 Element
// 6
// Enter 7 Element
// 8
// Enter 8 Element
// 9
// Enter Element To Search
// 2
// Element Not Found
