#include <iostream>
#include <stdexcept> 
#include "Time.h"
using namespace std;
 
int main() {
   Time t2(25, 0, 0); 
   t2.print();        
 
   try {
      Time t1(25, 0, 0);
      t1.print();
   }catch (invalid_argument& ex){
      cout << "Exception: " << ex.what() << endl;
   }
   cout << "Next statement after try-catch" << endl;
}