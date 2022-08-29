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
   void print() const { cout << "(" << x << "," << y << ")" << endl; } 
};
 
int main() {
   Point p1(5, 6);       
   p1.setX(55);
   p1.print();  
 
   const Point p2(7, 8); 
   p2.print();
}