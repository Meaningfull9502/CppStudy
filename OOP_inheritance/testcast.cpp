#include <iostream>
#include "MovablePoint.h"
using namespace std;
 
int main() {
   Point * ptrP1 = new MovablePoint(11, 12, 13, 14);
   ptrP1->print();
 
   MovablePoint * ptrMP1 = (MovablePoint *) ptrP1;
   delete ptrP1;
}
