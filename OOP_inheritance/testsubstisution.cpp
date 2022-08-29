#include <iostream>
#include "MovablePoint.h"
using namespace std;
 
int main() {
   Point * ptrP1 = new MovablePoint(11, 12, 13, 14); 
   ptrP1->print(); 
   cout << endl;
   delete ptrP1;
 
   MovablePoint mp2(21, 22, 23, 24);
   Point & p2 = mp2; 
   p2.print();  
   cout << endl;
 
   Point p3 = MovablePoint(31, 32, 33, 34);  
   p3.print();
   cout << endl;
   p3.move(); 
}