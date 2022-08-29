#include <iostream>
#include <cstdlib>
using namespace std;
 
int main() {
   const int SIZE = 5;
   int *pArray;
 
   pArray = new int[SIZE];
 
   for (int i = 0; i < SIZE; ++i) {
      *(pArray + i) = rand() % 100;
   }
   
   for (int i = 0; i < SIZE; ++i) {
      cout << *(pArray + i) << " ";
   }
   cout << endl;
 
   delete[] pArray;
   return 0;
}