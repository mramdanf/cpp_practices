#include <iostream>
#include <stdlib.h>
#include <string>
#include "penjumlahan.h"
#include "pengurangan.h"
#include "perkalian.h"
#include "pembagian.h"
using namespace std;

int main(int argc, char *argv[]) {
  int bilangan1, bilangan2;
  string op;
  if (argc <= 1) {
    cout << "parameter kosong" << endl;
    return 0;
  }
  
  bilangan1 = atoi(argv[1]);
  op = argv[2];
  bilangan2 = atoi(argv[3]);
  
  if (op == "+") {
    cout << "hasil: " << penjumlahan(bilangan1, bilangan2) << endl;
  } else if (op == "-") {
    cout << "hasil: " << pengurangan(bilangan1, bilangan2) << endl;
  } else if (op == "x") {
    cout << "hasil: " << perkalian(bilangan1, bilangan2) << endl;
  } else if (op == "/") {
    bilangan1 = atof(argv[1]);
    bilangan2 = atof(argv[3]);
    cout << "hasil: " << pembagian(bilangan1, bilangan2) << endl;
  }

  return 0;
}