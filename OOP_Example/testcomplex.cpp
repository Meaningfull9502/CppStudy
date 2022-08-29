#include <iostream>
#include <iomanip>
#include "Complex.h"
using namespace std;
 
int main() {
   Complex c1, c2(4, 5);
   c1.print();
   c2.print();
 
   c1.setValue(6, 7);
   c1.print();
 
   c1.setReal(0);
   c1.setImag(8);
   c1.print();
 
   cout << boolalpha;
   cout << "Is real? " << c1.isReal() << endl;     
   cout << "Is Imaginary? " << c1.isImaginary() << endl;
 
   c1.addInto(c2).addInto(1, 1).print();  
   c1.print();  
 
   c1.addReturnNew(c2).print();   
   c1.print();  
   c1.addReturnNew(1, 1).print();
   c1.print();  
}