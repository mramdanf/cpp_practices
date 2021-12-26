#include <iostream>
using namespace std;

int main() {
  char pilihan;
  char huruf[5] = {'F', 'A', 'D', 'I', 'L'};
  cout << "silahkan pilih huruf ";
  cin >> pilihan;
  for (int a = 0; a <= 4; a++) {
    if (pilihan == huruf[a]) {
      cout << huruf[a] << " adalah index ke " << a << endl;
    }
  }
  return 0;
}