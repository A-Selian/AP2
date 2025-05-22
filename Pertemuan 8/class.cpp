#include <iostream>
#include <string>
using namespace std;

struct data_alamat {
    string nama_jalan;
    string kota;
};

class data_mhs {
    string nama;
    string nim;
    char kom;
    data_alamat alamat;
    int nilai_tugas;
    public:
    data_mhs();
    void output_data();
    };

    data_mhs::data_mhs() {
        cout << "Masukkan Nama Praktikan: ";
        getline (cin, nama);
        cout << "Masukkan NIM: ";
        cin >> nim;
        cout << "Masukkan Kom Praktikan: ";
        cin >> kom;
        kom = toupper(kom);
        cout << "Masukkan Alamat Praktikan: " << endl;;
        cout << "Jalan: ";
        cin >> alamat.nama_jalan;
        cout << "Kota: ";
        cin >> alamat.kota;
    }

    void data_mhs::output_data() {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "KOM: " << kom << endl;
        cout << "Alamat: " << endl;
        cout << "Jalan: " << alamat.nama_jalan << endl;
        cout << "Kota: " << alamat.kota << endl;
    }

int main() {
    data_mhs mhs;
    mhs.output_data();
    return 0;
}