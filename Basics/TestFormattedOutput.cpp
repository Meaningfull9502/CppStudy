#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
   double pi = 3.14159265;
   cout << fixed << setprecision(4);
   cout << pi << endl;
   cout << "|" << setw(8) << pi << "|" << setw(10) << pi << "|" << endl;
   cout << setfill('-');
   cout << "|" << setw(8) << pi << "|" << setw(10) << pi << "|" << endl;
   cout << scientific;
   cout << pi << endl;
 
   bool done = false;
   cout << done << endl;
   cout << boolalpha;
   cout << done << endl;
   return 0;
}