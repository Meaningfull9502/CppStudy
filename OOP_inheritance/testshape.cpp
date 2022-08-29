#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;
 
int main() {
   Circle c1(5, "blue");
   c1.print();
   cout << endl;
   cout << "area=" << c1.getArea() << endl;
 
   Rectangle r1(5, 6, "green");
   r1.print();
   cout << endl;
   cout << "area=" << r1.getArea() << endl;
 
   Shape * s1, * s2;
 
   s1 = new Circle(6);  
   s1->print();   
   cout << endl;
   cout << "area=" << s1->getArea() << endl;  
 
   s2 = new Rectangle(7, 8);  
   s2->print();   
   cout << endl;
   cout << "area=" << s2->getArea() << endl;  
 
   delete s1;
   delete s2;
 
   Circle c3(8);
   Shape & s3 = c3;    
   s3.print();
   cout << endl;
   cout << "area=" << s3.getArea() << endl;
 
   Circle c4(9);
   Shape * s4 = &c4;  
   s4->print();
   cout << endl;
   cout << "area=" << s4->getArea() << endl;
}
