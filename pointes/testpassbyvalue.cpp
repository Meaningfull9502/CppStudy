#include <iostream>
using namespace std;
 
int square(int);
 
int main() {
   int number = 8;
   cout <<  "In main(): " << &number << endl;
   cout << number << endl;         
   cout << square(number) << endl; 
   cout << number << endl;         
}
 
int square(int n) {  
   cout <<  "In square(): " << &n << endl;
   n *= n;           
   return n;
}
