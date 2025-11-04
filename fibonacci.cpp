#include <iostream>
using namespace std;

int fibonacci(int n) {  // tambahkan tipe data 'int'
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {  // tambahkan 'int' juga di depan main
    int n;
    cout << "Masukkan jumlah panjang deret fibonacci yang diinginkan : ";
    cin >> n;

    cout << "Hasil: ";
    for (int i = 0; i < n; i++) {
        cout << "F (" << i <<")" <<fibonacci(i) <<endl;
    }
    cout << endl;

    return 0; // tambahkan return 0 agar program rapi
}
