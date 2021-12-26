// Example program
#include <iostream>
#include <string>
using namespace std;

int main() {
  int i, j, batas = 5;
  for (i = 0; i < batas; i++) {
    for (j = 0; j < batas; j++) {
      if (i == 0 || i == batas - 1 || j == 0 || j == batas - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
