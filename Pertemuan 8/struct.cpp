#include <iostream>
#include <string>
using namespace std;

struct data_alamat {
    string nama_jalan;
    string kota;
};

struct data_mhs {
    string nama;
    string nim;
    char kom;
    data_alamat alamat;
    int nilai_tugas;
};

void input_data(data_mhs &mhs) {
    cout << "Masukkan Nama Praktikan: ";
    getline (cin, mhs.nama);
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan Kom Praktikan: ";
    cin >> mhs.kom;
    mhs.kom = toupper(mhs.kom);
    cout << "Masukkan Alamat Praktikan: " << endl;;
    cout << "Jalan: ";
    cin >> mhs.alamat.nama_jalan;
    cout << "Kota: ";
    cin >> mhs.alamat.kota;
    cout << "Masukkan Nilai Tugas: ";
    cin >> mhs.nilai_tugas;
    cout << "Semua data telah dimasukkan." << endl;
}

void output_data(data_mhs mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "KOM: " << mhs.kom << endl;
    cout << "Alamat: " << endl;
    cout << "Jalan: " << mhs.alamat.nama_jalan << endl;
    cout << "Kota: " << mhs.alamat.kota << endl;
    cout << "Nilai Tugas: " << mhs.nilai_tugas << endl;
}

int main() {
    data_mhs absen[3];
    absen[1].nama = "Uvuvwevwevwe Onyetenyevwe Ugwemubwem Ossas";
    absen[1].nim = "171801100";
    absen[1].kom = 'A';
    absen[1].alamat.nama_jalan = "Jl. Kaki Cape no. 3";
    absen[1].alamat.kota = "New York";
    input_data(absen[2]);
    for(int x= 1; x<= 2; x++) {
        cout << "Absen Nomor-" << x << endl;
        output_data(absen[x]);
    }
    return 0;
}