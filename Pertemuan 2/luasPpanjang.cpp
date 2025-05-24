#include <iostream>
using namespace std;

int main () {

    float luas, p, l;

    // Program untuk menghitung luas persegi panjang
    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l; // menjelaskan variabel luas didapat dari nilai p dikali l
    cout << "Luas = " << luas << endl;

    return 0; // Mengembalikan nilai 0 menandakan program selesai dengan baik
}
