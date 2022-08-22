#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
   double celsius, fahrenheit;
 
   cout << fixed << setprecision(2);
 
   cout << "Enter the temperature in celsius: ";
   cin >> celsius;
   fahrenheit = celsius*9/5 + 32;
   cout << celsius << "C is " << fahrenheit << "F" << endl;
 
   cout << "Enter the temperature in fahrenheit: ";
   cin >> fahrenheit;
   celsius =  (fahrenheit - 32)*5/9;
   cout << fahrenheit << "F is " << celsius << "C" << endl;
   return 0;
}