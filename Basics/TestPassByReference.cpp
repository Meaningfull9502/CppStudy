#include <iostream>
using namespace std;
 
int squareByValue (int number);
void squareByReference (int & number);
 
int main() {
   int n1 = 8;
   cout << "Before call, value is " << n1 << endl;
   cout << squareByValue(n1) << endl;
   cout << "After call, value is " << n1 << endl;
 
   int n2 = 9;
   cout << "Before call, value is " << n2 << endl;
   squareByReference(n2);
   cout << "After call, value is " << n2 << endl;
}
 
int squareByValue (int number) {
   return number * number;
}

void squareByReference (int & number) {
   number = number * number;
}