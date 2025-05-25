#include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("CLS");
    // Program untuk mengubah kalimat menjadi huruf kapital
    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
 
    for(i = 0; i < kalimat.length(); i++) { // for digunakan untuk menyatakan kondisi dengan syarat
        kalimat[i] = toupper(kalimat[i]); // toupper merupakan fungsi yang digunakan untuk mengubah karakter menjadi huruf kapital
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}
