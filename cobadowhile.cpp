#include <iostream>
using namespace std;
int main(){
	int menu, tambah, jumlahhari = 5;
	char ulang;
	string hari[5] = {"senin", "selasa", "rabu", "kamis", "jumat"};
	//string nama_barang;
	do{
		cout <<"Pilihan Menu Toko" <<endl;
		cout <<"1. Lihat Hari" <<endl;
		cout <<"2. Input Hari" <<endl;
		cout <<"3. Keluar" <<endl;
		cout <<"Pilih Menu : ";
		cin >> menu;
		
		switch(menu){
		case 1:
			for(int i=0; i<jumlahhari; i++){
			cout <<"Hari ke-" <<i+1 <<" adalah hari " <<hari[i] <<endl;
		}
		break;
		case 2:
			cout <<"Mau nambah berapa hari? "; cin >> tambah;
			for (int i = 0; i< tambah; i++){
				jumlahhari++;
				cout <<"Masukkan nama hari ke-" <<jumlahhari <<" : ";
				cin >> hari[jumlahhari-1];
				cout << endl;
				}
		break;
		case 3:
			cout<<"Terimakasih telah menggunakan program ini" <<endl;
			exit(0);
		break;	
		}
		
		
		cout <<endl;
		cout <<"Apakah anda ingin mengulang program? (y/n) :" <<endl;
		cin >> ulang;
	} while (ulang == 'y' || ulang =='Y'); 
	return 0;
}
