#include <iostream>
using namespace std;

int main() {
    string kalimat;
    // Program untuk mengubah huruf vokal dalam kalimat menjadi huruf kapital
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || 
            kalimat[i] == 'o' || kalimat[i] == 'u') {
            kalimat[i] = toupper(kalimat[i]);
        }
    }

    cout << "Hasil: " << kalimat << endl;

    return 0;
}
