// Satria Arya Mahendra_124250160_Tugas 3
#include <iostream>
using namespace std;

// ==== Fungsi Menghitung Nilai Akhir ====
float hitungNilaiAkhir(int disiplin, int tj, int kerjasama, int inisiatif, int hasilkerja) {
    return (disiplin * 0.20) + (tj * 0.15) + (kerjasama * 0.20) + (inisiatif * 0.30) + (hasilkerja * 0.15);
}

// ==== Fungsi Menentukan Kategori ====
string tentukanKategori(float nilai) {
    if (nilai >= 90) return "Sangat Baik";
    else if (nilai >= 80) return "Baik";
    else if (nilai >= 70) return "Cukup";
    else return "Kurang";
}

// ==== Fungsi Menentukan Teladan ====
string tentukanTeladan(float nilai) {
    if (nilai >= 90) return "Ya";
    else return "Tidak";
}

int main() {
    int pilihan;
    string nama_pegawai[100];
    int jumlah = 0;
    int disiplin[100], tj[100], kerjasama[100], inisiatif[100], hasilkerja[100];
    float nilaiAkhir[100];
    string kategori[100], teladan[100];

    do {
        cout << "\n=== PROGRAM PENILAIAN KINERJA PEGAWAI ===" << endl;
        cout << "1. Input Nilai Pegawai" << endl;
        cout << "2. Tampilkan Hasil Penilaian" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih Menu (1-3) : ";
        cin >> pilihan;
        cin.ignore();

        // ===== MENU 1: Input Data Pegawai =====
        if (pilihan == 1) {
            int tambah;
            cout << "\nMasukkan Jumlah Pegawai Yang Ingin Ditambahkan: ";
            cin >> tambah;
            cin.ignore();

            for (int i = 0; i < tambah; i++) {
                cout << "\nPegawai ke - " << jumlah + 1 << endl;
                cout << "Nama Pegawai : ";
                getline(cin, nama_pegawai[jumlah]);

                cout << "Nilai Disiplin : ";
                cin >> disiplin[jumlah];
                cout << "Nilai Tanggung Jawab : ";
                cin >> tj[jumlah];
                cout << "Nilai Kerjasama : ";
                cin >> kerjasama[jumlah];
                cout << "Nilai Inisiatif : ";
                cin >> inisiatif[jumlah];
                cout << "Nilai Hasil Kerja : ";
                cin >> hasilkerja[jumlah];

                // Hitung hasil dan kategori
                nilaiAkhir[jumlah] = hitungNilaiAkhir(
                    disiplin[jumlah],
                    tj[jumlah],
                    kerjasama[jumlah],
                    inisiatif[jumlah],
                    hasilkerja[jumlah]
                );
                kategori[jumlah] = tentukanKategori(nilaiAkhir[jumlah]);
                teladan[jumlah] = tentukanTeladan(nilaiAkhir[jumlah]);

                // Tampilkan hasil langsung setelah input
                cout << "\n--- HASIL PENILAIAN PEGAWAI ---" << endl;
                cout << "Nama Pegawai     : " << nama_pegawai[jumlah] << endl;
                cout << "Nilai Akhir      : " << nilaiAkhir[jumlah] << endl;
                cout << "Kategori Kinerja : " << kategori[jumlah] << endl;
                cout << "Pegawai Teladan  : " << teladan[jumlah] << endl;

                jumlah++;
                cin.ignore();
            }
            cout << "\nData Penilaian Berhasil Ditambahkan!" << endl;
        }

        // ===== MENU 2: Tampilkan Semua Data =====
        else if (pilihan == 2) {
            if (jumlah == 0) {
                cout << "\nBelum ada data pegawai!" << endl;
            } else {
                cout << "\n=== HASIL PENILAIAN KINERJA PEGAWAI ===" << endl;
                for (int i = 0; i < jumlah; i++) {
                    cout << "\nPegawai ke - " << i + 1 << endl;
                    cout << "Nama Pegawai     : " << nama_pegawai[i] << endl;
                    cout << "Nilai Akhir      : " << nilaiAkhir[i] << endl;
                    cout << "Kategori Kinerja : " << kategori[i] << endl;
                    cout << "Pegawai Teladan  : " << teladan[i] << endl;
                }
            }
        }

        // ===== MENU 3: Keluar =====
        else if (pilihan == 3) {
            cout << "\nTerima kasih! Program selesai.\n";
        }

        // ===== Jika input salah =====
        else {
            cout << "\nPilihan tidak valid! Silakan coba lagi.\n";
        }

    } while (pilihan != 3);

    return 0;
}
