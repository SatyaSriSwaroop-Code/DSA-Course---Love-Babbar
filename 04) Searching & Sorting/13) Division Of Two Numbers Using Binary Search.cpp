#include <iostream>
using namespace std;

//Division of 2 numbers using Binary Search With Decimals
double DivisionOfTwoNumbersUsingBinarySearch(int dividend, int divisor)
{
  double ans;

  //To handle negative values we will take absolute value
  int absdividend = abs(dividend); 
  int absdivisor = abs(divisor);
  //initialize
  int start = 0;
  int end = absdividend;
  int mid = start + ((end - start) / 2);

  while (start <= end) //condition
    {
      //check mid multiplied by divisor is less than or equal to dividend
      if((mid * absdivisor) == absdividend)
      {
        ans = mid;
        break;
      }
      else if ((mid * absdivisor) < absdividend)
      {
        ans = mid;
        start = mid + 1;
      }
      else if ((mid * absdivisor) > absdividend)
      {
        end = mid - 1;
      }
      mid = start + ((end - start) / 2); //increment of mid for every iteration
    }

  //decimal part of the ans
  if(ans * absdivisor != absdividend)
  {
    double step = 0.1;
    for(int i = 0; i < 6; i++) //default precision i am setting is 6
      {
        for(double j = ans + step; 
            (j * absdivisor) <= (absdividend); 
            j += step)
          {
            ans = j;
            cout << "ans : " << ans << endl; //dry run
            cout << "j : " << j << endl; //dry run
          }   
        cout << "cameout" << endl;
        step /= 10;
      }
  }
  
  //To handle positive and negative inputs
  if((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
  {
    return ans;
  }
  else
  {
    return ans * -1;
  }
  
}

int main() {
   cout << DivisionOfTwoNumbersUsingBinarySearch(53,76) << endl;
}

// output:
// ans : 0.1
// j : 0.1
// ans : 0.2
// j : 0.2
// ans : 0.3
// j : 0.3
// ans : 0.4
// j : 0.4
// ans : 0.5
// j : 0.5
// ans : 0.6
// j : 0.6
// cameout
// ans : 0.61
// j : 0.61
// ans : 0.62
// j : 0.62
// ans : 0.63
// j : 0.63
// ans : 0.64
// j : 0.64
// ans : 0.65
// j : 0.65
// ans : 0.66
// j : 0.66
// ans : 0.67
// j : 0.67
// ans : 0.68
// j : 0.68
// ans : 0.69
// j : 0.69
// cameout
// ans : 0.691
// j : 0.691
// ans : 0.692
// j : 0.692
// ans : 0.693
// j : 0.693
// ans : 0.694
// j : 0.694
// ans : 0.695
// j : 0.695
// ans : 0.696
// j : 0.696
// ans : 0.697
// j : 0.697
// cameout
// ans : 0.6971
// j : 0.6971
// ans : 0.6972
// j : 0.6972
// ans : 0.6973
// j : 0.6973
// cameout
// ans : 0.69731
// j : 0.69731
// ans : 0.69732
// j : 0.69732
// ans : 0.69733
// j : 0.69733
// ans : 0.69734
// j : 0.69734
// ans : 0.69735
// j : 0.69735
// ans : 0.69736
// j : 0.69736
// cameout
// ans : 0.697361
// j : 0.697361
// ans : 0.697362
// j : 0.697362
// ans : 0.697363
// j : 0.697363
// ans : 0.697364
// j : 0.697364
// ans : 0.697365
// j : 0.697365
// ans : 0.697366
// j : 0.697366
// ans : 0.697367
// j : 0.697367
// ans : 0.697368
// j : 0.697368
// cameout
// 0.697368
