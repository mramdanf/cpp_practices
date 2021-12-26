#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int waktuDalamDetik, hari = 0, jam = 0, menit = 0, detik = 0;
  cout << "masukkan waktu dalam detik: ";
  cin >> waktuDalamDetik;
  if (floor(waktuDalamDetik / 86400) > 0) {
    hari = floor(waktuDalamDetik / 86400);
    waktuDalamDetik -= floor(waktuDalamDetik / 86400) * 86400;
  } 
  
  if (floor(waktuDalamDetik / 3600) > 0) {
    jam = floor(waktuDalamDetik / 3600);
    waktuDalamDetik -= floor(waktuDalamDetik / 3600) * 3600;
  }
  
  if (floor(waktuDalamDetik / 60) > 0) {
    menit = floor(waktuDalamDetik / 60);
		waktuDalamDetik -= floor(waktuDalamDetik / 60) * 60;
  } 

  detik = waktuDalamDetik;
  
  cout << to_string(hari) + " hari\n";
  cout << to_string(jam) + " jam\n";
  cout << to_string(menit) + " menit\n";
  cout << to_string(detik) + " detik\n";
}