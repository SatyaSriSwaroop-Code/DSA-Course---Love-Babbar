#include <iostream>
using namespace std;

int main() {
  
  int a = 5;
  int * ptr = &a;
  cout << "Address of a: " << &a << endl;
  cout <<  "Value of a stored using pointer: " << *ptr << endl;
  cout << "Address of pointer: " << &ptr << endl;
  cout << endl << endl << endl;

  int a1 = 12;
  int *ptr1 = &a1;
  char c = 'a';
  char *chptr = &c;
  double d = 1.34;
  double *dbptr = &d;
  cout<< "Size of Integer Pointer: " << sizeof(ptr1) << endl;
  cout<< "Size of char Pointer: " << sizeof(chptr) << endl;
  cout<< "Size of double Pointer: " << sizeof(dbptr) << endl;
  cout << endl << endl << endl;
  //A pointer is made to store address of a variable so its independent of datatype.
  //The size of a pointer depends on your platform. On a 32 bit platform you need 32 bits or 4 bytes to store a memory address. so size of any pointer will return 4 or on a 64 bit platform you need 64 bits or 8 bytes to store a memory address. so size of any pointer will return 8.


  //Pointer decelaration 
  int* ptrd; //bad practice
  cout<< ptrd << endl; //invalid or segmentation fault

  int* ptrd1 = 0; //good practice
  cout<< ptrd1 << endl;

  int* ptrd2 = nullptr; //good practice and new practice
  cout<< ptrd2 << endl;

  int ef = 9;
  int* ptrd3 = &ef; //good practice and new practice
  cout<< ptrd3 << endl;
  cout << endl << endl << endl;

  //Pointer Airthametics
  int value1 = 2;
  int* aptr = &value1;
  cout << aptr << endl; //address of value1 stored in aptr
  cout << aptr + 2 << endl; //address of value1 inc by 8 bytes (2* 4bytes)
  cout << *(aptr + 2) << endl; //garbage value
  cout << (*aptr) * 2 << endl; //value1 * 2
  cout << (*aptr)++ << endl; //Post Increment Operator
  cout << ++(*aptr) << endl; //Pre Increment Operator
  cout << endl << endl << endl;

  int value2 = 4;
  int* bptr = &value2;
  int* cptr = bptr; //Copy pointer
  int** dptr = &bptr; //pointer to a pointer
  cout << "Value Store in Value2: " << value2 << endl;
  cout << "Address of Value2: " << &value2 << endl;
  cout << "Value of Value2 using bptr pointer: " << *bptr << endl;
  cout << "Address of Value2 stored in bptr pointer: " << bptr << endl;
  cout << "Address of bptr pointer: " << &bptr << endl;
  cout << "Copy pointer cptr: " << cptr << endl;
  cout << "Address of cptr pointer: " << &cptr << endl;
  cout << "Value inside Copy pointer cptr" << *(cptr) << endl;
  cout << "dereferencing pointer of pointer -> dptr: " << **dptr << endl;
  cout << "dereferencing pointer stores address of bptr: " << dptr << endl;
  cout << "dereferencing pointer stores address of value2" << *dptr << endl;
  
}

// output:
// Address of a: 0x7ffcbad59d54
// Value of a stored using pointer: 5
// Address of pointer: 0x7ffcbad59d48



// Size of Integer Pointer: 8
// Size of char Pointer: 8
// Size of double Pointer: 8



// 0x1
// 0
// 0
// 0x7ffcbad59d44



// 0x7ffcbad59d40
// 0x7ffcbad59d48
// -1160405676
// 4
// 2
// 4



// Value Store in Value2: 4
// Address of Value2: 0x7ffcbad59d3c
// Value of Value2 using bptr pointer: 4
// Address of Value2 stored in bptr pointer: 0x7ffcbad59d3c
// Address of bptr pointer: 0x7ffcbad59d30
// Copy pointer cptr: 0x7ffcbad59d3c
// Address of cptr pointer: 0x7ffcbad59d28
// Value inside Copy pointer cptr4
// dereferencing pointer of pointer -> dptr: 4
// dereferencing pointer stores address of bptr: 0x7ffcbad59d30
// dereferencing pointer stores address of value20x7ffcbad59d3c
//  
