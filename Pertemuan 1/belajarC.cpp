#include <stdio.h>
#include <conio.h>

int main() {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n");

    printf("Masukkan nama : ");
    gets(nama); 

    printf("Masukkan nim : ");
    scanf("%d", &nim); 

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