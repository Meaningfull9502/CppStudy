#include <iostream>
using namespace std;
 
int squareConst(const int);
int squareNonConst(int);
int squareConstRef(const int &);
int squareNonConstRef(int &);

int main(){
   int number = 8;
   const int constNumber = 9;
   cout << squareConst(number) << endl;
   cout << squareConst(constNumber) << endl;
   cout << squareNonConst(number) << endl;
   cout << squareNonConst(constNumber) << endl;
   cout << squareConstRef(number) << endl;
   cout << squareConstRef(constNumber) << endl;
   cout << squareNonConstRef(number) << endl;
}
 
int squareConst(const int number) {
   return number * number;
}
 
int squareNonConst(int number) {
   number *= number;
   return number;
}
 
int squareConstRef(const int & number) {
   return number * number;
}
 
int squareNonConstRef(int & number) {
   return number * number;
}