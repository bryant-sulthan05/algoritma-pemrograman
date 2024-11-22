#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "arith.h"

int a = 0;
int b = 0;
char c = '\0';
int tambah = 0;
int kurang = 0;
int kali = 0;
float af = 0.0;
float bf = 0.0;
float bagi = 0.0;

void hitReturn();

int main()
{
    while ((a <= 0 || a > 100) || (b <= 0 || b > 100))
    {
        printf("\n");
        printf("user agar memasukkan angka yang benar: 1-100!!!\n");
        printf("==================================================");
        printf("\nmasukkan nilai variabel a (1-100): \n");
        scanf("%d", &a);
        af = (float)a;
        printf("masukkan nilai variabel b (1-100): \n");
        scanf("%d", &b);
        bf = (float)b;
        printf("\n");
    }

    printf("terimakasih. angka yang user masukkan sudah benar.\n");
    printf("Masukan operasi (+, -, *, /): \n");
    scanf(" %c", &c);
    tambah = addTwo(a, b);
    kurang = subtractTwo(a, b);
    kali = multTwo(a, b);
    bagi = divTwo(af, bf);

    printf("\n");
    printf("\nNilai masukan a : %d", a);
    printf("\nNilai masukan b : %d", b);

    printf("\n");
    printf("\nNilai konversi ke af : %5.2f", af);
    printf("\nNilai konversi ke bf : %5.2f", bf);

    printf("\n");
    if (c == '+')
    {
        printf("\nHasil penambahan adalah : %d", tambah);
    }
    else if (c == '-')
    {
        printf("\nHasil pengurangan adalah : %d", kurang);
    }
    else if (c == '*')
    {
        printf("\nHasil perkalian adalah : %d", kali);
    }
    else if (c == '/')
    {
        printf("\nHasil pembagian adalah : %5.2f", bagi);
    }
    else
    {
        printf("Error: Invalid operation!\n");
        return 0;
    }

    hitReturn();
    getch();

    return 0;
}

void hitReturn()
{
    printf("\n\n");
    printf("hit ENTER button to exit this program");
    printf("\n");
}