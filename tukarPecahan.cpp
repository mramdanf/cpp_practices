#include <iostream>
#include <string>
using namespace std;

int main() {
  int nilaiUang, count1000 = 0, count100 = 0, count50 = 0, count25 = 0;
  cout << "masukkan nilai uang: ";
  cin >> nilaiUang;
  while (nilaiUang != 0) {
    if (nilaiUang - 1000 >= 0) {
      nilaiUang -= 1000;
      count1000++;
    } else if (nilaiUang - 100 >= 0) {
      nilaiUang -= 100;
      count100++;
    } else if (nilaiUang - 50 >= 0) {
      nilaiUang -= 50;
      count50++;
    } else if (nilaiUang - 25 >= 0) {
      nilaiUang -= 25;
      count25++;
    }
  }
  cout << to_string(count1000) + " x 1000\n";
  cout << to_string(count100) + " x 100\n";
  cout << to_string(count50) + " x 50\n";
  cout << to_string(count25) + " x 25\n";
  return 0;
}