#include <stdio.h>

class Balok {
  public:
    int panjang, lebar, tinggi;
    Balok(int p, int l, int t) {
      panjang = p;
      lebar = l;
      tinggi = t;
    }
    int hitungVolume() {
      return panjang * lebar * tinggi;
    }
};

int main() {
  int panjang = 2, lebar = 2, tinggi = 2;
  int volumeBalok = 0;
  Balok balok(panjang, lebar, tinggi);
  volumeBalok = balok.hitungVolume();
  printf("\n\nVolume balok dengan panjang = %d, lebar = %d dan tinggi = %d adalah %d\n\n", panjang, lebar, tinggi, volumeBalok);
  return 0;
}