#include <iostream>
using namespace std;

void sizeofarray(int *arr)
{
  cout << sizeof(arr);
}
void update(int* p,int* q)
{
  *p = 100;
  *q = 200;
}
int main() {
  int arr[10] = {1,2,3,4,5};

  int *p = arr;
  //(* -> dereference operator)
  cout << "same address: " << endl;
  cout << arr << " " << &arr << " " << &arr[0];
  cout << endl<< endl;
  cout << "value: " << endl;
  cout << arr[0] << " " << *arr << " " << *(&arr[0]);
  cout << endl<< endl;
  cout << "both are same value: " << endl;
  cout << arr[0] << " " << 0[arr] << " " << *(arr+0);
  cout << endl;
  cout << *(arr + 1) << " " << *(1 + arr);
  //(arr = arr + 2) is not possible because we cant alter the address of an array.
  cout << endl<< endl;
  int arr1[4] = {5,6,7,8};
  int *p1 = arr1;
  int *q1 = arr1 + 1;
  cout << "1 : " << arr1 << endl;
  cout << "2 : " << &arr1 << endl;
  cout << "3 : " << arr1[0] <<endl;
  cout << "4 : " << &arr1[0] << endl;
  cout << "5 : " << p1 << endl;
  cout << "6 : " << *p1 << endl;
  cout << "7 : " << &p1 << endl;
  cout << "8 : " << *q1 << endl;
  cout << "9 : " << &q1 << endl;
  cout << "10 : " << *p1 + 1 << endl;
  cout << "11 : " << *q1 + 1 << endl;
  cout << "We went out of range of array : ";
  cout << *(q1 + 8) << endl;
  cout << endl<< endl;

  cout << "size of : " << endl;
  cout << "array arr1: " << sizeof(arr1) << endl;
  cout << "pointer p1 pointing to arr1: " <<sizeof(p1) << endl;
  cout << endl<< endl;

  cout << "character array : " << endl;
  char ch[10] = "alibab da";
  char* c = ch;
  cout << "1 : "<< ch << endl; //value in ch array
  cout << "2 : "<< &ch << endl; //base address
  cout << "3 : "<< *(ch + 3) << endl; //value in (base address + 3)
  cout << "4 : "<< ch[0] << endl; //value at 0
  cout << "5 : "<< c << endl; //full value in ch array
  cout << "6 : "<< &c << endl; //base address of c
  cout << "7 : "<< *c << endl; //value at 0
  cout << "8 : "<< *(c + 3) << endl; //value in (base address + 3)
  cout << "9 : "<< c + 2 << endl; //full value in ch array from 2 position
  cout << "10 : "<< c + 8 << endl; //full value in ch array from 10 position
  cout << "11 : "<< c + 11 << endl; //

  char name[10] = "Swaroop"; //good practice (memory is allocated for name and Swaroop is stored in it)
  char* ptr = "Swaroop"; //bad practice (In memory temporary variable is created and stored for Swaroop and then pointer is created and then the value is copied from temporary variable to ptr, during this process their can be loss of data or change in swaroop)

  cout << endl<< endl;
  cout << "Pointer to Function" << endl;
  int arr2[] = {1,2,3,4};
  sizeofarray(arr2); // here arr2 is a pointer being sent so thats why if you do sizeof(arr2) inside the sizeofarray function it returns pointer size. i.e;
   cout << endl<< endl;
  //example
  cout << "pointer to function example : " << endl;
  int arr3[] = {10,20,30,40};
  int *ptr1 = &arr3[1];
  int *ptr2 = &arr3[2];
  update(ptr1,ptr2);
  for(int i = 0; i<4; i++){
    cout << arr3[i] << " ";
  }
  
}
// output:
// same address: 
// 0x7ffc52a50130 0x7ffc52a50130 0x7ffc52a50130

// value: 
// 1 1 1

// both are same value: 
// 1 1 1
// 2 2

// 1 : 0x7ffc52a50120
// 2 : 0x7ffc52a50120
// 3 : 5
// 4 : 0x7ffc52a50120
// 5 : 0x7ffc52a50120
// 6 : 5
// 7 : 0x7ffc52a50100
// 8 : 6
// 9 : 0x7ffc52a500f8
// 10 : 6
// 11 : 7
// We went out of range of array : 0


// size of : 
// array arr1: 16
// pointer p1 pointing to arr1: 8


// character array : 
// 1 : alibab da
// 2 : 0x7ffc52a50110
// 3 : b
// 4 : a
// 5 : alibab da
// 6 : 0x7ffc52a500f0
// 7 : a
// 8 : b
// 9 : ibab da
// 10 : a
// 11 : 


// Pointer to Function
// 8

// pointer to function example : 
// 10 100 200 40
