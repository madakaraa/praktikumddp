#include <iostream>
using namespace std;
main () {
	int angka;
	string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
	cout <<"Pilih hari (1-7) = ";
	cin >> angka;
	switch (angka)
	{
		case 1:
		cout <<"Hari yang di pilih " << hari[0] << endl;
		cout <<"Hari Kerja";
		break;
		case 2:
		cout <<"Hari yang di pilih "  << hari[1] << endl;
		cout <<"Hari Kerja";
		break;
		case 3:
		cout <<"Kamu masukkan angka "  << hari[2] << endl;
		cout <<"Hari Kerja";
		break;
		case 4:
		cout <<"Kamu masukkan angka "  << hari[3] << endl;
		cout <<"Hari Kerja";
		break;
		case 5:
		cout <<"Kamu masukkan angka "  << hari[4] << endl;
		cout <<"Hari Kerja";
		break;
		case 6:
		cout <<"Kamu masukkan angka "  << hari[5] << endl;
		cout <<"Hari Libur";
		break;
		case 7:
		cout <<"Kamu masukkan angka "  << hari[6] << endl;
		cout <<"Hari Libur";
		break;
		default:
		cout <<"Pilihan Tidak Valid";		
	}
}
