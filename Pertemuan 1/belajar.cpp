#include <iostream> // Header program untuk menerima input/output C++
#include <conio.h> // Header untuk fungsi getch() dan getche()
using namespace std;
/* Header untuk membuat program dapat menjalankan fungsi dasar tanpa harus menuliskan 
std:: sebelum fungsi dasar, seperti cout, cin, endl, dan fungsi dasar lainnya */

int main() { // Fungsi utama program C++

    /////////////////////////////
    // Deklarasi variabel
    string nama;                // string dapat menerima input dan menyimpan input karakter tersebut ke variabel nama
    char kom, jenisKelamin;     // char dapat menerima input dan menyimpan karakter tersebut ke variabel, namun hanya satu karakter 
    int nim;                    // int berguna menerim input bilangan bulat
    float ip;                   // float dapat menerima input bilangan berkoma (desimal)
    /////////////////////////////
    
    /*ini untuk komen 
    beberapa baris*/

    cout << "Hello World" << endl; 
    /* Perintah cout berguna untuk menampilkan tulisan ke layar dan perintah endl akan mengakhiri baris dan 
    melanjutkan proses berikutnya di baris baru */

    cout << "Masukkan nama Anda : ";
    getline(cin, nama);
    /* Fungsi getline dipakai agar program dapat mengenali string yang berisi
    beberapa kata dengan memperhitungkan <spasi> sebagai karakter */

    cout << "Masukkan KOM : ";
    cin >> kom; // Perintah cin berguna agar program dapat mengenali input dari pengguna

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) :  ";
    jenisKelamin = getche();

    cout << "\n" << nama << endl; // \n berguna untuk menampilkan baris kosong 
    cout << nim << endl;
    cout << kom << endl;
    cout << ip << endl;
    putchar(jenisKelamin);        // putchar berguna untuk menampilkan karekter yang disimpan di variabel

    getch(); // Program akan menunggu input keyboard sebelum mengakhiri semua proses
}
