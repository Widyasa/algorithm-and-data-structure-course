
#include <stdio.h>
#include <stdbool.h>
float a ;
float b;
float result;
float result2;
char z;
char repeat_choice;
bool repeat = true;

int main() {

    while (repeat) {
        printf("selamat datang di program kalkulator sederhana \n");
        printf("silakan input tanda + untuk tambah \n");
        printf("silakan input tanda - untuk kurang \n");
        printf("silakan input tanda * untuk kali \n");
        printf("silakan input tanda / untuk bagi \n");
        printf("silakan input tanda x untuk menghitung rata-rata \n");
        printf("silakan input tanda 1 untuk menjalankan tugas 1 \n");
        printf("input nomor pertama : \n");
        scanf("%f", &a);
        printf("input nomor kedua: \n");
        scanf("%f", &b);
        printf("input format penghitungan: \n");
        scanf("%s", &z);

        if(z == '+'){
            result = a + b;
            printf("hasil dari pertambahan adalah %f", result);
        } else if(z == '-') {
            result = a - b;
            printf("hasil dari pengurangan adalah %f", result);
        } else if(z == '*') {
            result = a * b;
            printf("hasil dari pengurangan adalah %f", result);
        } else if(z == '/') {
            result = a * b;
            printf("hasil dari pengurangan adalah %f", result);
        } else if(z == 'x') {
            result = (a + b)/2;
            printf("hasil dari rata - rata adalah %f", result);
        } else if(z == '1') {
            result = (a + b)/2;
            result2 = a+b;
            printf("hasil dari tambah data adalah %f \n", result2);
            printf("hasil dari rata - rata data adalah %f \n", result);
        } else{
            printf("operator tidak terdefinisi \n");
            printf("operator harus + untuk tambah \n");
            printf("operator harus - untuk kurang \n");
            printf("operator harus * untuk kali \n");
            printf("operator harus / untuk bagi \n");
            printf("operator harus x untuk menghitung rata-rata \n");
            printf("operator harus 1 untuk menjalankan project nomor 1 \n");
        }
        printf("apakah anda ingin menggunakan kalkulator ini lagi (y/n) ?");
        scanf("%s", &repeat_choice);
        if (repeat_choice == 'n') {
            repeat = false;
        } else if(repeat_choice == 'y'){
            repeat = true;

        }

    }

    return 0;
}

