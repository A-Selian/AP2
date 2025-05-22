#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat;
};

struct alamat {
    string jalan;
    string kota;
    int kodePos;
};

int main () {
    mahasiswa mhs1;
    mhs1.nama = "Agus";
    mhs1.umur = 20;
    mhs1.ipk = 3.2;

//    mhs1.alamat.jalan = "Jl. Merdeka No. 1";
//    mhs1.alamat.kota = "Jakarta";
//    mhs1.alamat.kodePos = 12345;

//    cout << "Alamamat: " << mhs1.alamat.jalan << endl;

vector<Mahasiswa> mahasiswa;
int n;
cout << "Masukkan Jumlah Mahasiswa: ";
cin >> n;

for (int i =0; i < n; i++) {
    getline (cin, mhs1.nama);
    cout << "Masukkan Nama: ";
    cin >> mhs1.nama;
    cout << "Masukkan Umur: ";
    cin >> mhs1.umur;
    cout << "Masukkan IPK: ";
    cin >> mhs1.ipk;
    mahasiswa.push_back(mhs1);
}
for (int i =0; i < n; i++) {
    cout << "Mahasiswa: " << i+ 1 << endl;
    cout << "Nama: " << mahasiswa[i].nama << endl;
    cout << "Umur: " << mahasiswa[i].umur << endl;
    cout << "IPK: " << mahasiswa[i].ipk << endl;
}
