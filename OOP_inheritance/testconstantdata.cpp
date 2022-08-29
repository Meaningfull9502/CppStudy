#include <iostream>
using namespace std;
 
class Point {
private:
   int x;
   const int y;
public:
   Point(int x = 0, int y = 0) : x(x), y(y) {  }  
   int getX() const { return x; }
   int getY() const { return y; }
   void setX(int x) { this->x = x; }
   void print() const { cout << "(" << x << "," << y << ")" << endl; }
};