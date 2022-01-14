

#include <iostream>
#include <cstring>

using namespace std;

struct menemukan{
	char nama[30];
	double harga;
	int stok;
};

struct keranjang{
	menemukan menu;
	int qty;
};

menemukan daftarmenu[5];
keranjang keranjangKu[100];
int pesananKe = 0;

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
	cout << "No.\t" << "Nama\t\t" << "Harga" << endl;
	for(int i=0; i < 5; i++){
		cout << i+1 << ". \t" << daftarmenu[i].nama << "\t" << daftarmenu[i].harga << "\n";
	}
}

void reviewmenu(int nomeja,int nomenu,int harga,int jumlah){
	menemukan menu = daftarmenu[nomenu-1];
	cout << "meja no " << nomeja;
	cout << " memesan " << menu.nama;
	cout << " " << jumlah;
	cout << " total harga " << menu.harga*jumlah;
	cout << "\n";

	// Masukan pesanan ke keranjang
	keranjangKu[pesananKe].menu = menu;
	keranjangKu[pesananKe].qty = jumlah;
	cout << keranjangKu[pesananKe].menu.nama << endl;
	pesananKe++;
}

void notapembelian(int nomeja, int nomenu,int harga,int jumlah){
	double total = 0;
	cout << "### PESANAN ###\n";
	cout << "meja :" << nomeja << "\n";
	cout << "daftar menu yang di pilih\n";

	cout << "no.\tnama\t\tjumlah\tharga\tsub total\n";
	for (int i = 0; i < pesananKe; i++) {
		keranjang k = keranjangKu[i];
		cout << i+1
		     << ".\t"
				 << k.menu.nama 
			   << "\t" 
				 << k.qty 
				 << "\t" 
				 << k.menu.harga 
				 << "\t"
				 << k.menu.harga*k.qty
				 << "\n";
		total += (k.menu.harga*k.qty);
	}
	
	cout << "total: " << total << endl;
	cout << "teriama kasih telah berbelanja\n";
}