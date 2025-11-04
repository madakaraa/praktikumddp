#include <iostream>
using namespace std;
bool login = false;
bool cek_login(){
	return login = true;
	}
main(){
	string nama;
	string password;
	cout <<"Nama: ";
	cin >> nama;
	cout <<"Password: ";
	cin >> password;
	
	if(nama == "Satria" && password == "160"){
		login = true;
		}
	if(login){
		cout <<"Selamat datang anda berhasil login" <<endl;
		}
}
