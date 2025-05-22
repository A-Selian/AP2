#include <iostream>
using namespace std;

void tampilkanPesan() {
    cout << "==== SELAMAT DATANG DI AP 2 ====" << endl;
}

int tambah(int a, int b) {
    return a + b;
}

int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }else {
        return n * faktorial(n-1);
    }
}

int main() {
    system("CLS");

    tampilkanPesan();

    int x = 5, y = 3;

    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan : " << hasilTambah << endl;

    int hasilKaliInt = kali(x, y);
    double hasilKaliDouble = kali(5.5, 2.0);

    cout << "Hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double) : " << hasilKaliDouble << endl;

    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah : " << faktorial(angka) << endl;
}