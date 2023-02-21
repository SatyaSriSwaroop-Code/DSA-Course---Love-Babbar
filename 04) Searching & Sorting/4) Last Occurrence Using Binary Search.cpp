// note: the elements should be in sorted order
#include <iostream>
using namespace std;

//Find the Last Occurance of The Element
int LastOccuranceUsingBinarySearch(int arr[], int size, int target)
{
  int start = 0; //intialize start
  int end = size - 1; //initialize end
  int mid = start + ((end - start)/2); //initialize mid - we have to write like this instead of mid = ((start + end) / 2) to avoid mid value from getting out of range because some times start + end operation could exceed the integer range i.e; -2^31 to 2^31-1
  int ans = -1; //initialize answer with default not found value

  while (start <= end)
  {
    if (arr[mid] == target)
    {
      //save ans
      ans = mid;

      //Right search - because we want last occurance
      start = mid + 1;
    }
    else if (arr[mid] < target)
    {
      //Right Search
      start = mid + 1;
    }
    else
    {
     //left Search
      end = mid - 1;
    }
    mid = start + ((end - start) / 2); //update mid for every iteration
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

int main() {

  int a[100];

  int size = 0;
  cout << "Enter Size Of Array" << endl;
  cin >> size;

  //Get Array Elements
  GetArrayElements(a,size);

  int target = 0;
  cout << "Enter Element To Search" << endl;
  cin >> target;

  //Find the Last Occurance of The Element
  int result = LastOccuranceUsingBinarySearch(a,size,target);
  
  if(result != -1)
  {
    cout << "Last Occurance Of The Element You Are Searching Is " << result + 1 << " Element" << endl;
  }
  else
  {
    cout << "Element Not Found" << endl;
  }
}

// output
// Enter Size Of Array
// 8
// Enter 1 Element
// 12
// Enter 2 Element
// 14
// Enter 3 Element
// 56
// Enter 4 Element
// 56
// Enter 5 Element
// 56
// Enter 6 Element
// 56
// Enter 7 Element
// 78
// Enter 8 Element
// 92
// Enter Element To Search
// 56
// Last Occurance Of The Element You Are Searching Is 6 Element
