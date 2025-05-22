#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    float ipk;
public:
    Mahasiswa(string nama, string nim, float ipk) : nama(nama), nim(nim), ipk(ipk) {}

    string getNama() const { return nama; }
    string getNim() const { return nim; }
    float getIpk() const { return ipk; }

    void tampilkan() const {
        cout << "Nama: " << nama << ", NIM: " << nim << ", IPK: " << ipk << endl;
    }
};

class DataMahasiswa {
private:
    vector<Mahasiswa> daftar;
public:
    void tambahMahasiswa() {
        string nama, nim;
        float ipk;
        cout << "Masukkan nama: ";
        getline(cin >> ws, nama);
        cout << "Masukkan NIM: ";
        getline(cin, nim);
        cout << "Masukkan IPK: ";
        cin >> ipk;
        daftar.push_back(Mahasiswa(nama, nim, ipk));
        cout << "Data mahasiswa berhasil ditambahkan.\n";
    }

    void tampilkanSemua() const {
        if (daftar.empty()) {
            cout << "Belum ada data mahasiswa.\n";
            return;
        }
        for (const auto& mhs : daftar) {
            mhs.tampilkan();
        }
    }

    void rataRataIpk() const {
        if (daftar.empty()) {
            cout << "Belum ada data mahasiswa.\n";
            return;
        }
        float total = 0;
        for (const auto& mhs : daftar) {
            total += mhs.getIpk();
        }
        cout << "Rata-rata IPK: " << total / daftar.size() << endl;
    }

    void ipkTertinggi() const {
        if (daftar.empty()) {
            cout << "Belum ada data mahasiswa.\n";
            return;
        }
        float maxIpk = -1;
        const Mahasiswa* tertinggi = nullptr;
        for (const auto& mhs : daftar) {
            if (mhs.getIpk() > maxIpk) {
                maxIpk = mhs.getIpk();
                tertinggi = &mhs;
            }
        }
        cout << "Mahasiswa dengan IPK tertinggi:\n";
        tertinggi->tampilkan();
    }

    void ipkTerendah() const {
        if (daftar.empty()) {
            cout << "Belum ada data mahasiswa.\n";
            return;
        }
        float minIpk = numeric_limits<float>::max();
        const Mahasiswa* terendah = nullptr;
        for (const auto& mhs : daftar) {
            if (mhs.getIpk() < minIpk) {
                minIpk = mhs.getIpk();
                terendah = &mhs;
            }
        }
        cout << "Mahasiswa dengan IPK terendah:\n";
        terendah->tampilkan();
    }
};

int main() {
    DataMahasiswa data;
    int pilihan;
    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah data mahasiswa\n";
        cout << "2. Tampilkan seluruh data mahasiswa\n";
        cout << "3. Hitung rata-rata IPK\n";
        cout << "4. Tampilkan mahasiswa dengan IPK tertinggi\n";
        cout << "5. Tampilkan mahasiswa dengan IPK terendah\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
            case 1: data.tambahMahasiswa(); break;
            case 2: data.tampilkanSemua(); break;
            case 3: data.rataRataIpk(); break;
            case 4: data.ipkTertinggi(); break;
            case 5: data.ipkTerendah(); break;
            case 6: cout << "Keluar dari program.\n"; break;
            default: cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 6);
    return 0;
}

//////////////////////////////////////////////////////////////
#include <iostream>
#include <string>
using namespace std;

class mhs {
    private: string nama; string nim; float ipk;
    public: mhs(string nama, string nim, float ipk) : nama(nama), nim(nim), ipk(ipk) {}
    
    string getNama() const { return nama; }
    string getNim() const { return nim; }
    float getIpk() const { return ipk; }

    void tampil() const {
        cout << "Nama: " << nama << ", NIM: " << nim << ", IPK: " << ipk << endl;
    }
};

//////////////////////////////////////////////////////////