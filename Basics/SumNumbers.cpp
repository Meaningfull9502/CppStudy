#include <iostream>
using namespace std;

int main(){
   int sum = 0;
   int upperbound;
   cout << "Enter the upperbound : ";
   cin >> upperbound;
 
   for (int number = 1; number <= upperbound; ++number) {
      sum += number;
   }
   cout << "Sum is " << sum << endl;
   cout << "Average is " << (double)sum / upperbound << endl;
 
   int count = 0;
   sum = 0;
   for (int number=1; number <= upperbound; number=number+2) {
      ++count;
      sum += number;
   }
   cout << "Sum of odd numbers is " << sum << endl;
   cout << "Average is " << (double)sum / count << endl;
}