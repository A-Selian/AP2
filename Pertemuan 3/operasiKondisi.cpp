#include <iostream>
#include <string>
using namespace std;

int main () {
    int nilai;

    system("CLS");

    cout << "Masukkan nilai : ";
    cin >> nilai;

    // if statement adalah pernyataan yang digunakan untuk menguji suatu kondisi

    /* if digunakan untuk menyatakan kondisi pertama
    jika kondisi pertama benar, maka akan mengeksekusi blok kode berikut */    
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl;
    }
    
    // if - else statement adalah pernyataan yang paling dasar
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl;
    } 
    // else statement adalah pernyataan yang digunakan untuk menangani kondisi jika semua kondisi sebelumnya tidak terpenuhi
    else {
        cout << "Anda lulus !" << endl;
    }

    // if - else - if statement adalah pernyataan yang digunakan unruk menguji beberapa kondisi
    if (nilai == 100) {
        cout << "Anda Keceh" << endl;
    } 
    // else if statement adalah pernyataan yang digunakan untuk menguji kondisi lain jika kondisi sebelumnya tidak terpenuhi
    else if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } 
    else {
        cout << "Anda lulus" << endl;
    }

    // nested if (if di dalam if)
    if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } 
    else {
        if (nilai == 100) {
            cout << "Anda lulus dan Anda Hebat" << endl;
        } 
        else {
            cout << "Anda lulus" << endl;
        }
    }

    /* switch case merupakan pernyataan yang digunakan untuk
    memilih satu dari beberapa blok kode yang akan dieksekusi berdasarkan nilai dari suatu variabel atau ekspresi. */
    switch (nilai) { //switch adalah ekspresi yang mrnyatakan nilai variabel mana akan digunakan sebagai patokan
        case 1: // case adalah perintah yang akan dieksekusi jika nilai variabel sama dengan nilai case
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default // Perintah berikut akan dieksekusi jika nilai variabel berberda dari pernyataan yang ada
            cout << "Inputan tidak valid" << endl;
            break;
    }

    // switch range adalah switch yang dapat digunakan untuk menguji case dalam range nilai tertentu
    switch (nilai) {
        case 85 ... 100 : cout << "A" << endl; break;
        case 80 ... 84 : cout << "B+" << endl; break;
        case 75 ... 79 : cout << "B" << endl; break;
        case 70 ... 74 : cout << "C+" << endl; break;
        case 65 ... 69 : cout << "C" << endl; break;
        case 60 ... 64 : cout << "D" << endl; break;
        default: cout << "E" << endl;
    }

    // Ternary Operator adalah operator yang memungkinkan kita untuk menulis if-else dalam satu baris
    if (nilai % 2 == 0) {
        cout << "Genap sih" << endl;
    } 
    else {
        cout << "Fix, ini Ganjil" << endl;
    }

    a > 5 ? 9 : 6 // contoh ternary operator
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " tuh Bilangan " << checkNum << " sih " << endl;
}
