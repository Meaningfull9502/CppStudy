#include <iostream>
#include <stdexcept>
#include "Date.h"
 
int main() {
   Date d1(2012, 1, 1);
   d1.print();  
   d1.nextDay().print();  
   d1.print();  
 
   d1.setDate(2012, 1, 31);
   d1.print();  
   d1.nextDay().print();  
 
   d1.setDate(2012, 2, 28);
   d1.print();  
   d1.nextDay().print();  
 
   d1.setDate(2012, 12, 31);
   d1.print();  
   d1.nextDay().print();
  
   try {  
      Date d3(2011, 2, 29);
      d3.print();
   } catch (invalid_argument &ex) {
      cout << ex.what() << endl;  
   }
   cout << "Next Statement after try-catch" << endl;
 
   try {  
      Date d4(9999, 12, 30);
      d4.nextDay().print(); 
      d4.nextDay();
      d4.print();
   } catch (out_of_range &ex) {
      cout << ex.what() << endl;
   }
 
   Date d5(2012, 1, 1);
   d5.previousDay().print();  
 
   Date d6(2012, 3, 31);
   d6.nextMonth().print();  
 
   Date d7(2012, 3, 31);
   d7.previousMonth().print();
 
   Date d8(2012, 2, 29);
   d8.nextYear().print(); 
 
   Date d9(2012, 2, 29);
   d9.previousYear().print();
}