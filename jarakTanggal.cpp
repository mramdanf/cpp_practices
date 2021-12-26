#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Date {
  int d, m, y;
};

int main() {
  Date awal, akhir;
  string tglAwal, tglAkhir, delimiter;
  int nilaiAwal, nilaiAkhir, perbedaan, perbedaanTahun = 0, perbedaanBulan = 0, perbedaanHari = 0;
  size_t pos = 0;

  cout << "masukkan tanggal awal (dd:mm:yyyy): ";
  cin >> tglAwal;

  cout << "masukkan tanggal akhir (dd:mm:yyyy): ";
  cin >> tglAkhir;
  
  // split tgl awal dari input
  delimiter = ":";
  pos = tglAwal.find(delimiter);
  awal.d = stoi(tglAwal.substr(0, pos));
  tglAwal.erase(0, pos + delimiter.length());

  pos = tglAwal.find(delimiter);
  awal.m = stoi(tglAwal.substr(0, pos));
  tglAwal.erase(0, pos + delimiter.length());

  pos = tglAwal.find(delimiter);
  awal.y = stoi(tglAwal.substr(0, pos));
  tglAwal.erase(0, pos + delimiter.length());

  // split tgl akhir dari input
  pos = tglAkhir.find(delimiter);
  akhir.d = stoi(tglAkhir.substr(0, pos));
  tglAkhir.erase(0, pos + delimiter.length());

  pos = tglAkhir.find(delimiter);
  akhir.m = stoi(tglAkhir.substr(0, pos));
  tglAkhir.erase(0, pos + delimiter.length());

  pos = tglAkhir.find(delimiter);
  akhir.y = stoi(tglAkhir.substr(0, pos));
  tglAkhir.erase(0, pos + delimiter.length());
  
  nilaiAwal = awal.y * 365 + awal.d;
  nilaiAwal += awal.m * 30;

  nilaiAkhir = akhir.y * 365 + akhir.d;
  nilaiAkhir += akhir.m * 30;

  perbedaan = nilaiAkhir - nilaiAwal;

  if (floor(perbedaan / 365) > 0) {
    perbedaanTahun = floor(perbedaan / 365);
    perbedaan -= floor(perbedaan / 365) * 365;
  } 

  if (floor(perbedaan / 30) > 0) {
    perbedaanBulan = floor(perbedaan / 30);
    perbedaan -= floor(perbedaan / 30) * 30;
  }

  perbedaanHari = perbedaan;
  
  cout << to_string(perbedaanTahun) + " tahun\n";
  cout << to_string(perbedaanBulan) + " bulan\n";
  cout << to_string(perbedaanHari) + " hari\n";

  return 0;
}