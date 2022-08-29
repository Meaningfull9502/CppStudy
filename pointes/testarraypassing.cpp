#include <iostream>
using namespace std;

int max(const int arr[], int size);
void replaceByMax(int arr[], int size);
void print(const int arr[], int size);
 
int main() {
   const int SIZE = 4;
   int numbers[SIZE] = {11, 22, 33, 22};
   print(numbers, SIZE);
   cout << max(numbers, SIZE) << endl;
   replaceByMax(numbers, SIZE);
   print(numbers, SIZE);
}
 
int max(const int arr[], int size) {
   int max = arr[0];
   for (int i = 1; i < size; ++i) {
      if (max < arr[i]) max = arr[i];
   }
   return max;
}
 
void replaceByMax(int arr[], int size) {
   int maxValue = max(arr, size);
   for (int i = 0; i < size; ++i) {
      arr[i] = maxValue;
   }
}
 
void print(const int arr[], int size) {
   cout << "{";
   for (int i = 0; i < size; ++i) {
      cout << arr[i];
      if (i < size - 1) cout << ",";
   }
   cout << "}" << endl;
}