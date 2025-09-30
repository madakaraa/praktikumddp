#include <iostream>
using namespace std;
int main(){
	string hari[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};
	
	for(int i=0; i<7; i++){
		cout <<"Hari ke-" <<i+1 <<"adalah hari " <<hari[i] <<endl;
	}
	
	for(int i=3; i<9; i++){
	cout <<"Makan Gacoan Level = " <<i <<endl;
	}
	
	// ga masuk di perulangan
	cout <<"Perut jadi kenyang";
}
