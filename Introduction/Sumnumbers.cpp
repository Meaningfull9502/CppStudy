#include <iostream>
using namespace std;

int main(){
    int sum = 0;

    int upperbound;

    cout << "Enter the upperbound : ";
    cin >> upperbound;

    int number = 1;
    while (number <= upperbound)
    {
        sum = sum + number;
        ++number;
    }
    
    cout << "The sum from 1 to " << upperbound << " is " << sum << endl;

    return 0;
    
}
