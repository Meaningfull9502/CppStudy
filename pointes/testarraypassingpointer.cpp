#include <iostream>
using namespace std;

int max(const int *arr, int size);
 
int main() {
   const int SIZE = 5;
   int numbers[SIZE] = {10, 20, 90, 76, 22};
   cout << max(numbers, SIZE) << endl;
}

int max(const int *arr, int size) {
   int max = *arr;
   for (int i = 1; i < size; ++i) {
      if (max < *(arr+i)) max = *(arr+i);
   }
   return max;
}