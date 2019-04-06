#include <iostream>
using namespace std;


/*
This is the main function and the compiler searches for this
everytime. 
*/

int c = 40;
int a = 10;
const int j = 90;
int main(){
  cout << "Hello " << sizeof(char) <<endl;
  cout << "Hello " << c/a*j <<endl;
  return 0;
}

