#include <stdio.h> // Header file untuk menerima input/output program C
#include <conio.h> // Header file untuk menerima input/output program C untuk sistem yang menjalankan program

int main() { // Fungsi utama yang akan dijalankan program
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // Perintah printf adalah perintah program C yang berguna untuk menampilkan tulisan ke layar 

    printf("Masukkan nama : ");
    gets(nama); // fungsi masukan pada C, digunakan untuk string dalam bentuk array

    printf("Masukkan nim : ");
    scanf("%d", &nim); // %d untuk integer, &nim untuk alamat dari variabel nim

    getchar();

    printf("Masukkan kom : ");
    gets(kom); 

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    printf("Nama : ");
    puts(nama);

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom); 
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch();
}
