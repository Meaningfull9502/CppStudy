#include <iostream>
#include "MovablePoint.h"
using namespace std;
 
int main() {
   Point p1(4, 5);
   p1.print();    
   cout << endl;
 
   MovablePoint mp1(11, 22);
   mp1.print();       
   cout << endl;
   mp1.setXSpeed(8);
   mp1.move();
   mp1.print();       
   cout << endl;
 
   MovablePoint mp2(11, 22, 33, 44);
   mp2.print();  
   cout << endl;
   mp2.move();
   mp2.print();  
   cout << endl;
}