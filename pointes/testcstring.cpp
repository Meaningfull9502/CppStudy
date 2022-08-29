#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
   char msg1[] = "Hello";
   char *msg2 = "Hello";
 
   cout << strlen(msg1) << endl;    
   cout << strlen(msg2) << endl;
   cout << strlen("Hello") << endl;
 
   int size = sizeof(msg1)/sizeof(char);
   cout << size << endl;  
   for (int i = 0; msg1[i] != '\0'; ++i) {
      cout << msg1[i];
   }
   cout << endl;
 
   for (char *p = msg1; *p != '\0'; ++p) {
      cout << *p;
   }
   cout << endl;
}