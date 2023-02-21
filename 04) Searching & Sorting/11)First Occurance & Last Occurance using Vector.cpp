#Include <iostream>
#Include <vector>
#Include <bits/stdc++.h> // std :: upper_bound with arrays

using namespace std;
int main()
{
      //Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequences of numbers, characters etc. They reduce the complexity and execution time of the program.
      // Operations of iterators :-
      // 1. begin() :- This function is used to return the beginning position of the container.
      // 2. end() :- This function is used to return the after end position of the container.

  //note : using pointer on iterator gives us the value
  //note: the array must be sorted
  //STL Functions For First and last Occurance 
  vector<int> v = {1,2,3,3,3,4,5,6};
  vector<int>::iterator lowerbound,upperbound;

 
  //first Occurance
 lowerbound = lower_bound(v.begin(), v.end(),3);
 
  //last Occurance
  upperbound = upper_bound(v.begin(), v.end(),3);
  cout << "First Occurance is at : " << lowerbound - v.begin() << endl;
  cout << "Last Occurance is at : " << *upperbound << endl;
}
