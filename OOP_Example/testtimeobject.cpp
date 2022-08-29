#include <iostream>
#include "Time.h"
using namespace std;
 
int main() {
   Time t1(1, 2, 3);
   t1.print();
 
   Time* ptrT1 = &t1;
   (*ptrT1).print();
   ptrT1->print();  
 
   Time& refT1 = t1; 
   refT1.print();    
 
   Time* ptrT2 = new Time(4, 5, 6);
   ptrT2->print(); 
   delete ptrT2;   
 
   Time tArray1[2];
   tArray1[0].print(); 
   tArray1[1].print(); 
 
   Time tArray2[2] = {Time(7, 8, 9), Time(10)}; 
   tArray2[0].print(); 
   tArray2[1].print(); 
 
   Time* ptrTArray3 = new Time[2];
   ptrTArray3[0].print();  
   ptrTArray3[1].print();  
   delete[] ptrTArray3;
 
   Time* ptrTArray4 = new Time[2] {Time(11, 12, 13), Time(14)}; 
   ptrTArray4->print();        
   (ptrTArray4 + 1)->print();  
   delete[] ptrTArray4;
}