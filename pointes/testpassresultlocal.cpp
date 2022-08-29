#include <iostream>
using namespace std;
 
int * squarePtr(int);
int & squareRef(int);
 
int main() {
   int number = 8;
   cout << number << endl;
   cout << *squarePtr(number) << endl;
   cout << squareRef(number) << endl; 
}
 
int * squarePtr(int number) {
   int localResult = number * number;
   return &localResult;
}
 
int & squareRef(int number) {
   int localResult = number * number;
   return localResult;
}
