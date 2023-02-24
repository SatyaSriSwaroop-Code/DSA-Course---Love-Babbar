//Note this code works elements also.
//due to sorting and iterating through each element the complexity has increased to  O(n) and the logn is for binary search. 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int startIndex, int n, int target)
{
  //intitialize
  int start = startIndex;
  int end = n - 1;
  int mid = start + ((end - start) / 2);
  int ans = n; // we need to initialize it with n so that last element is returned in case of edge cases.

  while (start <= end)
    {
      if(arr[mid] >= target)
      {
        ans = mid;
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
      mid = start + ((end - start) / 2);
    }
  return ans;
}

int countPairsWithDiffK(int arr[], int n, int diff)
{
  int count = 0;
  sort(arr, arr + n); //for sort to work we need #include <bits/stdc++.h>
  for (int i = 0; i < n; i++)
    {
       int X = BinarySearch(arr, i+1, n, arr[i]+diff);
        
       if(X != n) //for duplicates we need to find Y where target is i+k+1
       {
         int Y = BinarySearch(arr, i+1, n, arr[i]+diff+1);
         count += Y - X;
       }
    }
  return count;
}

int main()
{
	int arr[] = { 1, 3, 4, 5, 6, 6, 8};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 2;
	cout << "Count of pairs with given diff is "
		<< countPairsWithDiffK(arr, n, k);

	return 0;
}

// output :
// Count of pairs with given diff is 4
