#include<cstdlib>
#include<string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int nRows = 0, nCols = 0;
  string readFilename;
  ifstream inFile;
  int size;
  cout << "Input a filename";
  cin >> readFilename;
  inFile.open(readFilename.c_str());
  if(!inFile.is_open()) {
    cout << "Failed to open the file";
    exit(1);
  }
  inFile >> size;
  nRows = size;
  nCols = size;
  cout << "n Rows" << inFile << endl;
  cout << "n Cols" << nCols << endl;
  return 0;
}