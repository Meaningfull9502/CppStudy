#include <iostream>
using namespace std;

int main(){
    int number1, number2;
    int sum, difference, product, quotient, remainder;

    cout << "Enter two integers (separated by space) : ";
    cin >> number1 >> number2;

    sum = number1 + number2;
    difference = number1 - number2;
    product = number1 * number2;
    quotient = number1 / number2;
    remainder = number1 % number2;

    cout << "The sum, difference, product, quotient and remainder of " << number1 << " and " << number2 << " are "
    << sum << ", "
    << difference << ", "
    << product << ", "
    << quotient << ", and "
    << remainder << endl;

    ++number1;

    --number2;

    cout << "number 1 after increment is " << number1 << endl;
    cout << "number 2 after decrement is " << number2 << endl;

    quotient = number1 / number2;
    cout << "The new quotient of " << number1 << " and " << number2 << " is " << quotient << endl;

    return 0;
}