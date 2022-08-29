#include <iostream>
#include <string>
using namespace std;
 
int main() {
   const string s1("Apple"); 
   string s2("Banana");      
 
   cout << s1.at(3) << endl; 
   s2.at(0) = 'A';           
   cout << s2 << endl;
}