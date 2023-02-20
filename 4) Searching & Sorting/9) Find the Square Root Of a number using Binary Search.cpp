//SquareRoot of A Given Number Using Binary Search 
#include <iostream>
using namespace std;

double Sqrt(int Quotient, int Precision)
{
  double ans = -1;

  //Real Part Of Answer
  int start = 0;
  int end = Quotient;
  double mid = start + ((end - start) / 2);
  
  while(start <= end)
    {
      if (mid * mid <= Quotient)
      {
        ans = mid;
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
      mid = start + ((end - start) / 2);
    }
  
  //decimal Part
  double step = 0.1;
  for (int i = 0; i < Precision; i++)
  {
    for (double j = ans; (j*j) <= Quotient; j += step)
      {
        ans = j;
      }
    step /= 10;
  }

  return ans;
}
int main()
{

  //pseudocode
  //run a loop 0 to quotient and perform binary search
  //for each number check if its square is most nearest to the Quotient.
  //return the nearest number

  //now to get the precision upto k
  //we will run a loop k times and each time we will run another loop and check check for double of the divisor is less than or equal to the quotient given.
  //we will add a step value of 0.1 for each iteration to the divisor to get the decimal value.
  //we have to divide the step value added in the loop by ten for each presicion round.

  int number; 
   int precision; 
  cout << "Enter the number to get Square Root" << endl;
  cin >> number;

  cout << "Enter the Precision Of the Squre Root" << endl;
  cin >> precision;

  printf("%f \n", Sqrt(number,precision));//The default precision for %f is 6 digits
  printf("%0.8f \n", Sqrt(number,precision));
  cout.precision(24);
  cout << Sqrt(number,precision); //The result of their division might be 1.664012738, but only 6 digits are printed because the cout only prints 6 digits like 1.66401 by default by rounding off the value.
  return 0;
}

// output :
// Enter the number to get Square Root
// 2
// Enter the Precision Of the Squre Root
// 14
// 1.414214 
// 1.41421356 
// 1.41421356237309003844871
