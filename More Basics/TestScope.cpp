#include <iostream>
using namespace std;
 
int x = 5;
 
int main() {
   float x = 55.5f;

   cout << x << endl;
 
   cout << ::x << endl;
 
   return 0;
}