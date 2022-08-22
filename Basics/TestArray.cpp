#include <iostream>
using namespace std;
 
int main() {
   int const SIZE = 5;
 
   int a1[SIZE];
   for (int i = 0; i < SIZE; ++i) cout << a1[i] << " ";
   cout << endl;
 
   int a2[SIZE] = {21, 22, 23, 24, 25};
   for (int i = 0; i < SIZE; ++i) cout << a2[i] << " ";
   cout << endl;
 
   int a3[] = {31, 32, 33, 34, 35};
   int a3Size = sizeof(a3)/sizeof(int);
   cout << "Size is " << a3Size << endl;
   for (int i = 0; i < a3Size; ++i) cout << a3[i] << " ";
   cout << endl;
 
   int a4[SIZE] = {41, 42};
   for (int i = 0; i < SIZE; ++i) cout << a4[i] << " ";
   cout << endl;
 
   int a5[SIZE] = {0};
   for (int i = 0; i < SIZE; ++i) cout << a5[i] << " ";
   cout << endl;
 
   int a6[SIZE] = {};
   for (int i = 0; i < SIZE; ++i) cout << a6[i] << " ";
   cout << endl;
}
