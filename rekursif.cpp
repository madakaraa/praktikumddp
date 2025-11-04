#include <iostream>
using namespace std;

// fungsi dengan iterasi biasa
int pangkat(int a, int b){
	int hasil = a;
	for(int i = 1; i<b; i++){
		hasil = hasil * a;
		}
		return hasil;
	}
	
// fungsi dengan rekursif
int pangkatRekursi(int a, int b){
	if (b == 1){
		cout <<"Akhir dari rekursif : ";
		return a;
		} else {
			cout <<"Rekursif" <<endl;
			return a*pangkatRekursi(a,b-1);
			}
	}

// faktorial
int faktorial(int n){
	if (n == 0 || n == 1){
		return 1;
		} else {
			return n * faktorial(n-1);
			}
	}

int main(){
	int n;
	cout <<"Masukkan angka faktorial : ";
	cin >> n;
	cout <<"Hasilnya = " <<faktorial(n); 
	/*int a,b;
	cout <<"Operasi A dipangkatkan B" <<endl;
	cout <<"Masukkan angka a : "; 
	cin >> a;
	cout <<"Masukkan angka b : ";
	cin >> b;
	cout <<"Hasil pangkat : " <<pangkat(a,b) << endl;
	cout <<"Hasil pangkat : " <<pangkatRekursi(a,b);*/
	//cout <<"Hasil pangkat : ";
	}
