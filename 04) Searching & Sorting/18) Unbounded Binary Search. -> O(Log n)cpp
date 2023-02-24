// C++ code for binary search
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int low, int high); // prototype

// Let's take an example function
// as f(x) = x^2 - 10*x - 20 Note that
// f(x) can be any monotonically increasing function
int f(int x) { return (x*x - 10*x - 20); }

// Returns the value x where above
// function f() becomes positive
// first time.
int findFirstPositive()
{
	// When first value itself is positive
	if (f(0) > 0)
		return 0;

	// Find 'high' for binary search by repeated doubling
	int i = 1;
	while (f(i) <= 0)
		i = i*2;

	// Call binary search
	return binarySearch(i/2, i);
}

// Searches first positive value
// of f(i) where low <= i <= high
int binarySearch(int low, int high)
{
		 //intitialize
  int start = low;
  int end = high;
  int mid = start + ((end - start) / 2);
  

  while (start <= end)
    {
      // If f(mid) is greater than 0 and
        // one of the following two
        // conditions is true:
        // a) mid is equal to low
        // b) f(mid-1) is negative
      if(f(mid) > 0 && (mid == low || f(mid-1) <= 0))
      {
        return mid;
      }
      else if (f(mid) > 0) // f(mid) > 0
      {
          end = mid - 1;
      }
      else // If f(mid) is smaller than or equal to 0
      {
        start = mid + 1;
      }
      mid = start + ((end - start) / 2);
    }

	/* Return -1 if there is no
	positive value in given range */
	return -1;
}

/* Driver code */
int main()
{
	cout<<"The value n where f() becomes" <<
		"positive first is "<< findFirstPositive();
	return 0;
}
//output:
//The value n where f() becomespositive first is 12
