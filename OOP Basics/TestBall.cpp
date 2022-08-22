#include <iostream>
#include "Ball.h"
using namespace std;
 
int main() {
   Ball ball;
   ball.print(); 
   ball.setXY(1.1, 2.2);
   ball.setXYSpeed(3.2, 4.4);
   ball.print();
   ball.setX(5.5);
   ball.setY(6.6);
   cout << "x is " << ball.getX() << endl;
   cout << "y is " << ball.getY() << endl;
   ball.move();
   ball.print();
}