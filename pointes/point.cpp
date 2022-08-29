#include <iostream>
using namespace std;
int main() {
    int number = 88;
    int *p = &number;
    cout << p << endl;
    cout << *p << endl;
    *p = 99;           
    cout << *p << endl;
    cout << p << endl;
    cout << number << endl; 
}

