#include <iostream>
#include <string>
using namespace std;
main(){
	int contohAngka = 11;
	string nama;
	
	cout <<"Masukkan Nama = ";
	cin >> nama;
	cout <<"Masukkan Angka = ";
	cin >> contohAngka;
	
	if (contohAngka < 10 && nama =="satria")
	{
		cout <<"Angka " << contohAngka <<" lebih kecil dari 10";
	} 
	else if (contohAngka > 10 && nama =="arya")
	{
		cout <<"Angka" << contohAngka <<"lebih besar dari 8";
	}
	else if (contohAngka > 8)
	{
		cout <<"Angka lebih besar dari 10";
	}
	else
	{
		cout <<"Variabel contohAngka bukan angka / int";
	}
}
