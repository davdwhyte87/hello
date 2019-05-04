#include <iostream>
using namespace std;

int main() {
  int var = 20;
  int *pi;
  pi = &var;
  cout << "address of var.." << pi << endl;
  cout << "value of *pi " << *pi << endl;
  return 0;
}