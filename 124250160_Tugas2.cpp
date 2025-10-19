// Satria Arya Mahendra_124250160
#include <iostream>
using namespace std;
int main() {
	string menu[100] = {"Espresso", "Cappuccino", "Creamy Latte", "Americano", "Brownie Cake"};
	int harga[100] = {25000, 30000, 35000, 28000, 20000 };
	int jumlah_menu = 5;
	int pilihan;
	char lanjut;
	
	do {
		cout <<"\n===== Cafe Sederhana =====" <<endl;
		cout <<"1. Daftar Menu" <<endl;
		cout <<"2. Pembelian" <<endl;
		cout <<"3. Tambah Menu Baru" <<endl;
		cout <<"4. Keluar" <<endl;
		cout <<"Masukkan Pilihan Anda: ";
		cin >> pilihan;
		cin.ignore();
		
		if(pilihan == 1){
			cout <<"=====================================" <<endl;
			cout <<"--- Daftar Menu Cafe ---" <<endl;
			cout <<"=====================================" <<endl;
			cout << "No  Nama Menu	   \t Harga" <<endl;
			cout <<"=====================================" <<endl;		
			for(int i = 0; i<jumlah_menu; i++){
				cout <<i + 1 <<". " <<menu[i] << "\t\t - Rp" <<harga[i] <<endl;
			} 
			cout <<"=====================================" <<endl;
		}
		else if (pilihan == 2){
			string nama_pembeli;
			int nomor_menu, jumlah_pesanan, total_harga, diskon = 0, total_bayar;
			char member;
			cout <<"Masukkan nama pembeli: ";
			getline(cin, nama_pembeli);
			cout <<"Masukkan nomor menu yang ingin dibeli: ";
			cin >> nomor_menu;
			cout <<"Masukkan jumlah pesanan: ";
			cin >> jumlah_pesanan;
			cout <<"Apakah anda member? (y/n): ";
			cin >> member;
			total_harga = harga[nomor_menu - 1] * jumlah_pesanan;
			
			if (member == 'Y' || member == 'y'){
				diskon = total_harga * 20 / 100;
			}
			
			total_bayar = total_harga - diskon;
			
			cout <<"\n--- Rincian Pembelian ---" <<endl;
			cout <<"Nama Pembeli		: " << nama_pembeli <<endl;
			cout <<"Menu dipesan		: " << menu[nomor_menu - 1] <<endl;
			cout <<"Harga per menu		: " << harga[nomor_menu - 1] <<endl;
			cout <<"Jumlah pesanan		: " << jumlah_pesanan <<endl;
			cout <<"Total Harga		: RP" <<total_harga <<endl;
			
			if (diskon > 0){
				cout <<"Diskon (20%)		: Rp" <<diskon <<endl;
				}
			cout <<"Total Bayar		: Rp" << total_bayar <<endl;
			
			
			int bayar;	
			cout <<"Masukkan jumlah pembayaran: ";
			cin >> bayar;
			cout <<"Kembalian Rp" << bayar - total_bayar <<endl;
		}
			else if (pilihan == 3){	
				int banyak;
				cout <<"Tambah Menu Baru" <<endl;
				cout <<"----------------------------" <<endl;
				cout <<"Mau tambah berapa menu baru cuy?: ";
				cin >> banyak;
				cin.ignore();
				
				
				for (int i = 0; i<banyak; i++){
					cout << "\nData menu ke-" << (jumlah_menu + 1) << endl;
					cout << "======================" << endl;
					cout <<"Masukkan nama menu baru: ";
					getline(cin, menu[jumlah_menu]);
					cout <<"Masukkan harga: ";
					cin >> harga[jumlah_menu];
					cin.ignore();
					jumlah_menu++;
					
					}
					
				cout <<"\nMenu berhasil ditambahkan!" <<endl;
				cout << "\n--- Daftar Menu Cafe ---" << endl;
				cout << "No | Nama Menu       | Harga\n";
				for (int i = 0; i < jumlah_menu; i++) {
					cout << i + 1 << ". " << menu[i] << " - Rp" << harga[i] << endl;
				}
			}
			else if (pilihan == 4 ){
				cout <<"Terimakasih, program telah selesai" <<endl;
				}
			else {
				cout <<"Pilihan anda tidak valid!" <<endl;
				}
				cout << "\nApakah anda ingin melanjutkan program? (y/n): ";
				cin >> lanjut;
	} while (lanjut == 'y' || lanjut == 'Y');
				cout <<"Terimakasih";
	
	return 0;
}
