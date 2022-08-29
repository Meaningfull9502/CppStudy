#include <iostream>
#include <cstring>
using namespace std;
 
int count(const char *str, const char c);
 
int main() {
   char msg1[] = "Hello, world";
   char *msg2 = "Hello, world";
 
   cout << count(msg1, 'l') << endl;
   cout << count(msg2, 'l') << endl;
   cout << count("Hello, world", 'l') << endl;
}
 
int count(const char *str, const char c) {
   int count = 0;
   while (*str) {
      if (*str == c) ++count;
      ++str;
   }
   return count;
}