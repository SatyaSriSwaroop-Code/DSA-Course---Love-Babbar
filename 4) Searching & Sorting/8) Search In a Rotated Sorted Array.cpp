//Search In a Sorted and Rotated Array
#include <iostream>
using namespace std;
//BinarySearch
int BinarySearch(vector<int> nums, int size, int startIndex, int endIndex, int target)
{
   //intialize start
    int start = startIndex;
    //initialize end
    int end = endIndex;
    //initialize mid
    int mid = start + ((end - start) / 2);
    
    //condition
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            //right search
            start = mid + 1;
        }
        else if (target < nums[mid])
        {
            //left search
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

//Finds the pivot index in an array
int FindPivotIndex(vector<int> nums, int size)
{
    //intialize start
    int start = 0;
    //initialize end
    int end = size - 1;
    //initialize mid
    int mid = start + ((end - start) / 2);

    //condition
    while (start < end) //loop will run until start is less than end
    {
        if(size == 2)
        {
          return size - 1;
        }
        //for a pivot element the element next to it will be lesser in number
        //considering mid element as pivot also checking it doesn't exceed the range 
        if(((mid + 1) < (size)) && (nums[mid] > nums[mid + 1]))
        {
           return mid;
        }
        //considering mid - 1 element as pivot also checking it doesn't exceed the range
        else if(((mid - 1) >= 0) && (nums[mid - 1] > nums[mid]))
        {
           return mid - 1;
        }

        //if pivot element not found in above two cases 
        //To check left side of mid
        if(nums[start] >= nums[mid])
        {
            end = mid - 1;
        }
        else if (nums[start] < nums[mid])//To check right side along with mid
        {
            start = mid;
        }
        mid = start + ((end - start) / 2);
    }
 return end;
}


int main ()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(3);
    int target = 5;
    int result = -1;
    //get size of input array
     int size = (int)nums.size();
     
     //find pivot
     int pivotIndex = FindPivotIndex(nums, size);
     
     //doing binary search by deciding which part of the pivot array has the target value
     //if target is in A part of the pivot array
     if(nums[0] <= target && nums[pivotIndex] >= target) 
     {
        result = BinarySearch(nums,size,0, pivotIndex,target);
     }
     //if target is in B part of the pivot array
     else if(((pivotIndex + 1) < size) && (nums[pivotIndex + 1] <= target && nums[size - 1] >= target)) 
     {
         result = BinarySearch(nums,size,pivotIndex + 1,size - 1 ,target);
     }
     cout << result;
     return 0;
  }

// otuput: 0 
