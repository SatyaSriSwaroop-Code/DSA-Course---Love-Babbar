// CPP program for The painter's partition problem
#include <climits>
#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int curr_min)
{
	int c = 1;
	long long curr_sum = 0;

	// iterate over all books
	for (int i = 0; i < n; i++) {
		// check if current number of boards are greater
		// than curr_min that means we will get the result
		// after mid no. of boards
		if (arr[i] > curr_min)
			return false;

		// count how many painters are required
		// to distribute curr_min pages
		if (curr_sum + arr[i] > curr_min) {
			// increment painter count
			c++;

			// update curr_sum
			curr_sum = arr[i];

			// if painters required becomes greater
			// than given no. of painters,return false
			if (c > m)
				return false;
		}

		// else update curr_sum
		else
			curr_sum += arr[i];
	}
	return true;
}

// function to calculate sum between two indices
// in array
long long sum(int arr[], int from, int to)
{
	int total = 0;
	for (int i = from; i <= to; i++)
		total += arr[i];
	return total;
}

// for n boards and k partitions
long long partition(int arr[], int n, int k)
{
	// // base cases
	// if (k == 1) // one partition
	// 	return sum(arr, 0, n - 1);
	// if (n == 1) // one board
	// 	return arr[0];

	long long best = -1;
	long long start = 0; 
  long long end = sum(arr,0,n-1);
	

	// traverse until start <= end
	while (start <= end) {
		// check if it is possible to distribute
		// books by using mid as current minimum
		long long mid = start + (end - start / 2);
		if (isPossible(arr, n, k, mid)) {
			// update result to current distribution
			// as it's the best we have found till now.
			best = mid;

			// as we are finding minimum and boards
			// are sorted so reduce end = mid -1
			// that means
			end = mid - 1;
		}

		else
			// if not possible means boards should be
			// increased so update start = mid + 1
			start = mid + 1;
	}

	return best;
}

int main()
{
	int arr[] = { 10, 20, 60, 50, 30, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	cout << partition(arr, n, k) << endl;

	return 0;
}

// output:
// 90
