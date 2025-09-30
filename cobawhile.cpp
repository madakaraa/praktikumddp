#include <iostream>
using namespace std;
int main(){

	int angka = 7, tebakan;
	cout <<"masukkan angka tebakan : ";
	cin >> tebakan;
	
	while(tebakan != angka){
		cout <<"tebakan anda salah!" <<endl;
		cout <<"masukkan angka tebakan lagi : ";
		cin >> tebakan;
	}
		cout <<"tebakan benar";	
}
