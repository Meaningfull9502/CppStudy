#include <iostream>
using namespace std;
 
int main() {
   const int SIZE = 5;
   int numbers[SIZE] = {11, 22, 44, 21, 41};
 
   cout << &numbers[0] << endl;
   cout << numbers << endl;    
   cout << *numbers << endl;   
   cout << *(numbers + 1) << endl;
   cout << *(numbers + 4) << endl;
}