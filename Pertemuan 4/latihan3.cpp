#include <iostream>
using namespace std;

int main() {
    // Program untuk mengecek apakah input kedua sesuai dengan pola yang ditentukan
    string password, sandi, expected = "";

    cout << "Masukkan kata sandi : ";
    cin >> password;

    cout << "Masukkan kata : ";
    cin >> sandi;
    
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
    }
    /* Pola yang benar adalah: 112123123412345......nnnnnnn */
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } 
    else {
        cout << "Tulisan agen salah" << endl;
    }

    return 0;
}
