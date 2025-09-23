// Satria Arya Mahendra_124250160
#include <iostream>      
using namespace std;       

int main() {
    cout << "============================================" << endl;
    cout << " Selamat Datang di Sistem Pengecekkan Nilai Huruf UAS" << endl;
    cout << "============================================" << endl;  

    int nilai[2];        
		cout << "Masukkan nilai UAS Mahasiswa ke-1: ";
		cin >> nilai[0];
		cout << "Masukkan nilai UAS Mahasiswa ke-2: ";
		cin >> nilai[1];   

    cout << "\nHasil Konversi Nilai UAS ke Nilai Huruf:\n";

    if (nilai[0] >= 85)    
        cout << "Mahasiswa ke-1: A" << endl;
        
    else if (nilai[0] >= 70) cout << "Mahasiswa ke-1: B" << endl;
    else if (nilai[0] >= 55) cout << "Mahasiswa ke-1: C" << endl;
    else if (nilai[0] >= 40) cout << "Mahasiswa ke-1: D" << endl;
    else cout << "Mahasiswa ke-1: E" << endl;

    if (nilai[1] >= 85) cout << "Mahasiswa ke-2: A" << endl;
    else if (nilai[1] >= 70) cout << "Mahasiswa ke-2: B" << endl;
    else if (nilai[1] >= 55) cout << "Mahasiswa ke-2: C" << endl;
    else if (nilai[1] >= 40) cout << "Mahasiswa ke-2: D" << endl;
    else cout << "Mahasiswa ke-2: E " << endl;

    return 0;
}
