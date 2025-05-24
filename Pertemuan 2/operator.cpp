#include <iostream>
using namespace std;

int main () {
    int a, b;

    system("CLS"); // perintah untuk membersihkan layar konsol

    a = 3;
    b = 5;

    // Operator Aritmatika, berguna untuk mengeksekusi operasi aritmatika
    int tambah = a + b;    // Mencari nilai a tambah b
    int kurang = a - b;    // Mencari nilai a kurang b
    int kali = a * b;      // Mencari nilai a kali b
    float bagi = (float)a / (float)b; // Mencari nilai a bagi b
    // Baris di atas memiliki proses type casting. type casting berguna untuk mengubah tipe data dari sebuah variabel
    int modulo = a % b;    // Mencari sisa pembagian a dibagi b

    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian = " << kali << endl;
    cout << "Hasil pembagian = " << bagi << endl;
    cout << "Hasil sisa bagi = " << modulo << endl;

    /* Relational Operator adalah operator yang digunakan untuk membandingkan dua nilai.
    Operator ini akan menampilkan 1 jika true dan menampilkan 0 jika false */
    cout << (a==b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a!=b) << endl;

    /* Logical Operator (&&,||, !)
    Operator logika digunakan untuk menggabungkan dua atau lebih ekspresi logika */
    
    // && (AND) mengembalikan true jika kedua operand bernilai true
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;
    
    // || (OR) mengembalikan true jika salah satu operand bernilai true
    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    // ! (NOT) mengembalikan true jika operand bernilai false
    cout << !true << endl;
    cout << !false << endl;

    /* Bitwise Operator (&, |, ^, ~, >>, <<)
    Bitwise operator digunakan untuk melakukan operasi bit pada bilangan bulat */
    cout << (5&7) << endl;    // & adalah operator bitwise AND, membandingkan bit dari dua bilangan
    cout << (5|7) << endl;    // | adalah operator bitwise OR, membandingkan bit dari dua bilangan
    cout << (5^7) << endl;    // ^ adalah operator bitwise XOR, membandingkan bit dari dua bilangan
    cout << (~7) << endl;     // ~ adalah operator bitwise NOT, membalikkan semua bit dari bilangan
    cout << (7 << 2) << endl; // << adalah operator bitwise shift left, menggeser bit ke kiri
    cout << (7 >> 2) << endl; // >> adalah operator bitwise shift right, menggeser bit ke kanan

    /* Shorthand operator (+=, -=, *=, /=)
    Shorthand operator digunakan untuk menyederhanakan penulisan kode */
    a += 7; // a = a + 7;
    cout << a << endl;

    a -= 7; // a = a - 7;
    cout << a << endl;

    a *= 7; // a = a * 7;
    cout << a << endl;

    a /= 7; // a = a / 7;
    cout << a << endl;

    /* Increment, Decrement */
    // Pre Increment, dimana operator increment digunakan untuk menambahkan nilai variabel sebelum nilai variabel tersebut digunakan
    cout << a << endl;
    cout << ++a << endl;

    cout << b << endl;
    cout << ++b << endl;

    // Post Increment, dimana operator increment digunakan untuk menambahkan nilai variabel setelah nilai variabel tersebut digunakan
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl;

    // Pre Decrement, dimana operator decrement digunakan untuk mengurangi nilai variabel sebelum nilai variabel tersebut digunakan
    cout << a << endl;
    cout << --a << endl;

    cout << b << endl;
    cout << --b << endl;

    // Post Decrement, dimana operator decrement digunakan untuk mengurangi nilai variabel setelah nilai variabel tersebut digunakan
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl;
}
