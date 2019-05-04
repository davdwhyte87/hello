#include <iostream>
using namespace std;

void printArray(int array[], int length);
int main() {
  int input [7] = {4, 18, 2, 33, 8, 5, 14};
  // loop through the array many times
  int len = 7;

  while (len != 0)
  {
    for (int i=0; i<7; i++ ) {
    int larger;
    int less;
    int next = i+1;
    if (next == 7) break;
    // cout << input[i];
    if (input[i] > input[next]) {
      larger = input[i];
      less = input[next];
      input[i] = less;
      input[next] = larger;
      }
    }
    len--;
  }
  
  
  printArray(input, 7);
  return 0;
}

void printArray(int array[], int length) {
  for (int n=0; n<length; n++) {
    cout << array[n] << ' ';
    cout << '\n';
  }
}