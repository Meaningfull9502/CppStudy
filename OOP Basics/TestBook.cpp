#include <iostream>
#include "Book.h"
using namespace std;
 
int main() {
   Author peter("Peter Jones", "peter@somewhere.com", 'm');
   peter.print();
 
   Book cppDummy("C++ for Dummies", peter, 19.99);
   cppDummy.setQtyInStock(88);
   cppDummy.print();
 
   cout << cppDummy.getQtyInStock() << endl;
   cout << cppDummy.getPrice() << endl;     
   cout << cppDummy.getAuthor().getName() << endl;
   cout << cppDummy.getAuthor().getEmail() << endl;
   cout << cppDummy.getAuthorName() << endl;      
 
   Book moreCpp("More C++ for Dummies", peter, -19.99);
   cout << moreCpp.getPrice() << endl; 
}