#include <iostream>
using namespace std;
 
void square(int &);
 
int main() {
   int number = 8;
   cout <<  "In main(): " << &number << endl;
   cout << number << endl;  
   square(number);          
   cout << number << endl;  
}
 
void square(int & rNumber) {
   cout <<  "In square(): " << &rNumber << endl;
   rNumber *= rNumber;      
}