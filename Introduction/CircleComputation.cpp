#include <iostream>
using namespace std;

int main(){
    double radius, circumference, area;
    const double PI = 3.14159265;

    cout << "Enter the radius : ";
    cin >> radius;

    area = radius * PI;
    circumference = 2.0 * radius * PI;

    cout << "The radius is : " << radius << endl;
    cout << "The area is : " << area << endl;
    cout << "The circumference is : " << circumference << endl;

    return 0;
}