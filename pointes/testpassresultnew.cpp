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
   int * dynamicAllocatedResult = new int(number * number);
   return dynamicAllocatedResult;
}
 
int & squareRef(int number) {
   int * dynamicAllocatedResult = new int(number * number);
   return *dynamicAllocatedResult;
}
