#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    /*ini untuk komen 
    beberapa baris*/

    cout << "Hello World" << endl;

    cout << "Masukkan nama Anda : ";
    getline(cin, nama);

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) :  ";
    jenisKelamin = getche();

    cout << "\n" << nama << endl;
    cout << nim << endl;
    cout << kom << endl;
    cout << ip << endl;
    putchar(jenisKelamin);

    getch(); 
}