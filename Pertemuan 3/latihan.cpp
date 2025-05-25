#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;
    // Program untuk menguji apakah sebuah bilangan merupakan keliapan 10 atau 5
    /* if statement adalah pernyataan yang digunakan untuk menguji suatu kondisi */
    if (angka % 10 == 0) {
    /* if digunakan untuk menyatakan kondisi pertama
    jika kondisi pertama benar, maka akan mengeksekusi blok kode berikut */
        cout << angka << " adalah kelipatan dari 10." << endl;
    }
    else if (angka % 5 == 0) { 
    // else if statement adalah pernyataan yang digunakan untuk menguji kondisi lain jika kondisi sebelumnya tidak terpenuhi
        cout << angka << " adalah kelipatan dari 5." << endl;
    }
    else {
    // else statement adalah pernyataan yang digunakan untuk menangani kondisi jika semua kondisi sebelumnya tidak terpenuhi
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl;
    }

 return 0;
}
