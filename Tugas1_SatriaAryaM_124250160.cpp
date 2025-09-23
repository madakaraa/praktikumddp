// Satria Arya Mahendra_124250160
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string username;
    string password;
    string userLogin;
    string passLogin;

    // Data login
    username = "Satria";             // masukkan username nya sebagai auth
    password = "160";          // masukkan nim (akhir) untuk auth login

    // Menu Login
    cout << "=== Selamat Datang di Program Kasir ===" << endl;
    cout <<"========================================" << endl;
    cout << "Masukkan Username Anda! : ";
    cin >> userLogin;
    cout << "Masukkan Password Anda! : ";
    cin >> passLogin;

    if (userLogin != username || passLogin != password) {
        cout << "Login gagal, harap masukkan username atau password yang benar!" << endl;
        return 0; // program akan stop
    }

    cout << "Login Berhasil! Selamat Datang di Program Kasir " << endl;

    // Menu awal
    char pilihan;
    cout << "Apakah anda ingin input barang? (Y/T): ";
    cin >> pilihan;

    if (pilihan == 'T' || pilihan == 't') {
        cout << "Terima kasih, program selesai." << endl;
        return 0;
    }

    // Input data barang
    string barang[5];
    int stok[5];

    cout << "\nMasukkan data 5 barang:\n";
    cin.ignore(); // buat bisa di spasi
    for (int i = 0; i < 5; i++) {
        cout << "Nama barang ke-" << i + 1 << ": ";
        //cin >> barang[i];
        getline(cin, barang[i]);
        cout << "Stok barang ke-" << i + 1 << ": ";
        cin >> stok[i];
        cin.ignore();
    }

    // Output tabel barang
    cout << "\n=== Daftar Barang & Stok ===" << endl;
    cout << "====================================================" << endl;
    cout << left << setw(20) << "Nama Barang" 
         << setw(10) << "    Stok" 
         << "    Keterangan" << endl;
    cout << "====================================================" << endl;

    for (int i = 0; i < 5; i++) {
        if (stok[i] < 0) {
            continue; // barang tidak ditampilkan
        }

        string ket;
        if (stok[i] == 0) ket = "Stok Habis";
        else if (stok[i] <= 50) ket = "Stok Menipis";
        else if (stok[i] <= 100) ket = "Stok Relatif Aman";
        else ket = "Stok Banyak";
        cout << left << setw(24) << barang[i] 
             << setw(10) << stok[i] 
             << ket << endl;
    }
        cout << "====================================================" << endl;
        cout <<"Terima Kasih" <<endl;
        cout <<"Created By Satria Arya Mahendra";
    return 0;
}
