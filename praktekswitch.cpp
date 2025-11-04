#include <iostream>
using namespace std;
main (){
	int angka;
	int array[3] = {1,2,3};
	cout <<"Masukkan angka bebas = ";
	cin >> angka;
	switch (angka)
	{
		case 1:
		cout <<"Kamu masukkan angka " << array[0] << endl;
		cout <<"Walawe";
		break;
		case 2:
		cout <<"Kamu masukkan angka "  << array[1] << endl;
		break;
		case 3:
		cout <<"Kamu masukkan angka "  << array[2] << endl;
		break;
		default:
		cout <<"Anda tidak memasukkan apapun";		
	}
	// bentuk if
	/*if (angka == 1)
	{
		cout <<"Kamu memasukkan angka 1";
	}
	else if (angka == 2)
	{
		cout <<"Kamu memasukkan angka 2";
	}
	else
	{
		cout <<"Anda tidak memasukkan apapun";
	}*/
}
