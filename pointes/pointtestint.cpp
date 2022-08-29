#include <iostream>
using namespace std;
 
int main() {
   int number = 88;
   int *pNumber = &number;
 
   cout << pNumber << endl;
   cout << &number << endl;
   cout << *pNumber << endl;
   cout << number << endl;
 
   *pNumber = 99;
   cout << pNumber << endl;
   cout << &number << endl;
   cout << *pNumber << endl;
   cout << number << endl;
   cout << &pNumber << endl;

   int * iPtr;
   *iPtr = 55;
   cout << *iPtr << endl;
}
