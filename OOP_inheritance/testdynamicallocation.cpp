#include "Point.h"
#include <iostream>
using namespace std;
 
int main() {
   Point * ptrP1;
   ptrP1 = new Point(); 
   ptrP1->print();     
   cout << endl;
 
   Point * ptrP2 = new Point(2, 2);
   ptrP2->print();  
   cout << endl;
 
   delete ptrP1;    
   delete ptrP2;
 
   Point * ptrPtsArray = new Point[2];
   ptrPtsArray[1].setXY(31, 31);
   ptrPtsArray[1].print();
   cout << endl;
   delete[] ptrPtsArray;  
}