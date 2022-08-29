#include "Point.h"
#include <iostream>
using namespace std;
 
int main(){
   Point p1;
   Point p2(2, 2);
   p1.print();    
   cout << endl;
   p2.print();    
   cout << endl;
 
   Point * ptrP3, * ptrP4;
   ptrP3 = new Point();   
   ptrP4 = new Point(4, 4);
   ptrP3->print();  
   cout << endl;
   ptrP4->print();  
   cout << endl;
 
   delete ptrP3;    
   delete ptrP4;
 
   Point & p5 = p2;
   p5.print();     
   cout << endl;

   Point ptsArray1[2];     
   ptsArray1[0].print();   
   cout << endl;
   ptsArray1[1].setXY(11, 11);
   (ptsArray1 + 1)->print();
   cout << endl;
 
   Point ptsArray2[3] = {Point(21, 21), Point(22, 22), Point()};
   ptsArray2[0].print();   
   cout << endl;
   (ptsArray2 + 2)->print();
   cout << endl;
 
   Point * ptrPtsArray3 = new Point[2];
   ptrPtsArray3[0].setXY(31, 31);
   ptrPtsArray3->print();  
   cout << endl;
   (ptrPtsArray3 + 1)->setXY(32, 32);
   ptrPtsArray3[1].print();          
   cout << endl;
   delete[] ptrPtsArray3;
}