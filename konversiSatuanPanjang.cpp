#include <iostream>
#include <string>
using namespace std;

int main() {
  float panjangBenda;
  cout << "masukkan panjang benda: ";
  cin >> panjangBenda;
  cout << to_string((panjangBenda * 1000) / 25.4) + " inchi\n";
	cout << to_string((panjangBenda * 100) / 30.48) + " kaki\n";
	cout << to_string(panjangBenda / 0.9144) + " yard\n";
  return 0;
}