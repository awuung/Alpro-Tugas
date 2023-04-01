/* Nama File            : JumPrima.c */
/* Deskripsi            : Memasukan Dan mengeluarkan bilangan prima sampai ke n */
/* Pembuat              : Awang Pratama Putra Mulya / 24060122120039*/
/* tanggal pembuatan    : 22/03/2023*/

#include <stdio.h>
#include <stdlib.h>

/*Kamus lokal*/
int n,i,count,sum;

/*Algpritma*/

int isPrime(int n) { // fungsi untuk mengecek bilangan prima
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void findPrimes(int n) { // sub program untuk menampilkan bilangan prima dan jumlahnya
    int sum = 0, count = 0;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    if (count == 0) {
        printf("Tidak Ada Bilangan Prima, sehingga Jumlahannya Sn=0\n");
    } else {
        printf("dengan Jumlahan Deret Bilangannya adalah Sn=%d\n", sum);
    }
}

int main() 
{ // program utama

    /*kamus*/

    int n;

    /*Algoritma*/

    printf("Masukkan bilangan N: ");
    scanf("%d", &n);
    findPrimes(n);
    return 0;
}