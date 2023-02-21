#Include <iostream>
#Include <vector>

using namespace std;
//Implement Binary Search On A 2D Matrix
string BinarySearchIn2DMatrix(int arr[][2], int rows, int cols, int target)
{
   //Initialize
  int start = 0;
  int end = (rows  * cols) - 1;
  int mid = start + ((end - start) / 2);
  
  
  while (start <= end)
  {
    //ToFindOut
    int rowIndex = mid / cols;
    int colIndex = mid % cols;

    //Checking Element
    if (arr[rowIndex][colIndex] == target)
    {
      return "Element Found";
    }
    //left search 
    else if (arr[rowIndex][colIndex] > target)
    {
      end = mid - 1;
    }
    //right search
    else if (arr[rowIndex][colIndex] < target)
    {
      start = mid + 1;
    }
    mid = start + ((end - start) / 2); //mid value updation
  }
  return "Element Not Found";

}


 string BinarySearchInA2DMatrixUsingVector(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(); //To Find No of rows in a vector
        int cols = matrix[0].size(); //To Find No of columns in a vector

        //initialize
        int start = 0;
        int end = (rows  * cols) - 1;
        int mid = start + ((end - start) / 2);
        
        //condition
        while (start <= end)
        {
            int rowIndex = mid / cols; //rowIndex
            int colIndex = mid % cols; //colIndex
        
            if (matrix[rowIndex][colIndex] == target) //checking element
            {
              return "Element Found";
            }
            else if (matrix[rowIndex][colIndex] > target) //left search
            {
               end = mid - 1;
            }
            else if (matrix[rowIndex][colIndex] < target) //right search
            {
               start = mid + 1;
            }
            mid = start + ((end - start) / 2); //mid updation
        }
        return "Element Not Found";
    }

int main()
{
  // note: if only array is given as input we can find the number of rows and nof columns by using this formaula like : 
  //number of rows = (sizeof(arr)/sizeof(arr[0])) = (memory occupied by all the elements in the matrix)/(memory occupied by elements in the first row) = ((number of rows)*(number of cols)*(size of int))/((number of rows)*(size of int));
 
  //number of cols = (sizeof(arr[0])/sizeof(arr[0][0])) = (memory occupied by elements in the first row)/(memory occupied by the first element in the first row) = ((number of rows)*(size of int))/((number of rows)*(size of int));
  
  int arr[3][2] = {{1,2},{3,4},{5,6}}; //2d array
  int rows = sizeof(arr)/sizeof(arr[0]);
  int cols = sizeof(arr[0])/sizeof(arr[0][0]);
  
  vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}}; //2d vector

  
  cout << BinarySearchInA2DMatrixUsingVector(matrix,3) << endl;
  
  cout << BinarySearchIn2DMatrix(arr,3,3,10) << endl;

  return 0;
}
// output:
// Element Found
// Element Not Found
