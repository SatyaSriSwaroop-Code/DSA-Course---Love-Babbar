//Note - Binary Search can only be perforned if the data is sorted i.e; ascending or descending order.

#include <iostream>
using namespace std;

//Binary Search
int BinarySearch(int arr[], int size, int target)
{
  //initialize start
  int start = 0;
  //initialize end
  int end = size - 1;
  //initialize mid
  int mid = start + ((end - start) / 2); // we have to write like this instead of mid = ((start + end) / 2) to avoid mid value from getting out of range because some times start + end operation could exceed the integer range i.e; -2^31 to 2^31-1

  //iterate the array
  while (start <= end) //if start exceeds end we will end the loop
  {
    if (arr[mid] == target) //element found
    {
      return mid;
    }
    else if (arr[mid] > target) //left search
    {
      end = mid - 1; 
    }
    else //right search
    {
      start = mid + 1; 
    }
    mid = start + ((end - start) / 2); //update the mid for each iteration
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

  int size = 0;
  cout << "Enter Size Of Array" << endl;
  cin >> size;

  //Get Array Elements
  GetArrayElements(a,size);

  int target = 0;
  cout << "Enter Element To Search" << endl;
  cin >> target;

  //Binary Serach
  int result = BinarySearch(a, size, target);
  if(result != -1)
  {
    cout << "Element You Are Searching Is " << result + 1 << " Element" << endl;
  }
  else
  {
    cout << "Element Not Found" << endl;
  }
}

//Output-1
//Enter Size Of Array
//6
//Enter 1 Element
//1
//Enter 2 Element
//3
//Enter 3 Element
//5
//Enter 4 Element
//7
//Enter 5 Element
//11
//Enter 6 Element
//12
//Enter Element To Search
//7
//Element You Are Searching Is 4 Element

//Output-2
//Enter Size Of Array
//5
//Enter 1 Element
//-11
//Enter 2 Element
//-7 
//Enter 3 Element
//4
//Enter 4 Element
//6
//Enter 5 Element
//93
//Enter Element To Search
//-8
//Element Not Found
