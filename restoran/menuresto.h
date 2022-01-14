#include <iostream>
#include <cstring>

using namespace std;

struct menemukan{
	char nama[30];
	double harga;
	int stok;
};

menemukan daftarmenu[5];

void inisialisasimenu(){
	strcpy(daftarmenu[0].nama,"mie ayam");
	daftarmenu[0].harga = 15000;
	daftarmenu[0].stok = 50;
	strcpy(daftarmenu[1].nama,"mie beranak");
	daftarmenu[1].harga = 45000;
	daftarmenu[1].stok = 50;
	
	strcpy(daftarmenu[2].nama,"mie tomyam");
	daftarmenu[2].harga = 5000;
	daftarmenu[2].stok = 50;
	
	strcpy(daftarmenu[3].nama,"mie ramen");
	daftarmenu[3].harga = 35000;
	daftarmenu[3].stok = 50;
	
	strcpy(daftarmenu[4].nama,"mie baso ayam");
	daftarmenu[4].harga = 25000;
	daftarmenu[4].stok = 50;
}

void Daftarmenu(){
	system("cls");
	for(int i=0; i < 5; i++){
		cout << i+1 << " " << daftarmenu[i].nama << "\n";
	}
}

void reviewmenu(int nomeja,int nomenu,int harga,int jumlah){
	cout << "meja no " << nomeja;
	cout << " memesan " << daftarmenu[nomenu-1].nama;
	cout << " " << jumlah;
	cout << " total harga " << daftarmenu[nomenu-1].harga*jumlah;
	cout << "\n";
}

void notapembelian(int nomeja, int nomenu,int harga,int jumlah){
	cout << "### PESANAN ###\n";
	cout << "meja :" << nomeja << "\n";
	cout << "daftar menu yang di pilih\n";
	cout << "nama\tjumlah\tharga\n";
	cout << daftarmenu[nomenu-1].nama << "\t" << jumlah << daftarmenu[nomenu-1].harga << "\n";
	cout << daftarmenu[nomenu-1].harga*jumlah << "\n";
	cout << "total: \n";
	cout << "teriama kasih telah berbelanja\n";
}