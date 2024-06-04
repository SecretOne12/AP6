#include<stdio.h>

int main(){
    int nim; 
    char kom;
    float ip; 
    char nama[50];

    printf("Hello World\n");
    printf("Masukkan nama : ");
    //scanf("%s",&nama); //menggunakan scanf hanya bisa menampilkan kata awal//
    gets (nama); //gets : get string --> bisa mengambil banyak kata.

    //user menginput data
    printf("Masukkan NIM : ");
    scanf("%d",&nim);

    printf("Masukkan KOM :");
    scanf(" %c",&kom);

    printf("Masukkan IP : ");
    scanf("%f",&ip);

    //printf("NAMA  : %s \n", nama);
    printf("NAMA : \n");
    puts(nama); //puts : put string
    printf("NIM : %d \n", nim);
    printf("KOM : %c \n", kom);
    printf("IP : %.2f \n", ip); //mengatur angka dibelakang koma
    return 0;
}