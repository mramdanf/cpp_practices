#include <iostream>
#include "menuresto.h"

using namespace std;

int main(){
	int nomeja=0;
	int nomenu=-1;
	int jumlah=0;
	int harga=0;
	char pilihan;
	cout << "### SYSTEM PEMESANANAN ###\n";
	cout << "### RESTORAN SEDERHANA ###\n";
	cout << "meja no : ";
	cin >> nomeja;
	
	inisialisasimenu();
	do{
		system("cls");
		Daftarmenu();
		cout << "silahkan pilih no menu :" ;
		cin >> nomenu;
		cout << "jumlah : ";
		cin >> jumlah;
		reviewmenu(
			nomeja,
			nomenu,
			harga,
			jumlah
		);
		cout << "pilih menu lagi [y/t]: ";
		cin >> pilihan;
	}while (pilihan == 'y');
	system("cls");
	notapembelian(nomeja,nomenu,harga,jumlah);
	return 0;
}
