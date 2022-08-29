#include <iostream>
using namespace std;
 
class Point {
private:
   int x, y;
 
public:
   Point(int x = 0, int y = 0) : x(x), y(y) { }
   int getX() const { return x; }
   int getY() const { return y; }
   void setX(int x) { this->x = x; }
   void setY(int y) { this->y = y; }
   void setXY(int x, int y) { this->x = x; this->y = y; }
   void print() const {
      cout << "Point @ (" << x << "," << y << ")";
   }
};