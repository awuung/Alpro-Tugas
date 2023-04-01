/* Nama File            : NilMax2Tabel.c */
/* Deskripsi            : Memasukan Dan mengeluarkan nilai maksimum ke dua pada tabel */
/* Pembuat              : Awang Pratama Putra Mulya / 24060122120039*/
/* tanggal pembuatan    : 17/03/2023*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{

    /*Kamus*/

    int N; // jumlah elemen pada tabel T
    int T[100]; // tabel T yang diberikan

    int max1; // nilai maksimum pertama
    int max2; // nilai maksimum kedua
    int i; //counter

    /*Algortitma*/

    printf("Masukkan jumlah elemen tabel T: ");
    scanf("%d", &N);

    printf("Masukkan elemen tabel T: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }
    
    max1 = T[0]; // asumsi nilai maksimum pertama adalah elemen pertama tabel
    max2 = T[0]; // asumsi nilai maksimum kedua adalah elemen pertama tabel

    // mencari nilai maksimum pertama dan kedua pada tabel T
    for (i = 1; i < N; i++) {
        if (T[i] > max1) {
            max2 = max1;
            max1 = T[i];
        } else if (T[i] > max2 && T[i] != max1) {
            max2 = T[i];
        }
    }

    // menampilkan nilai maksimum ke-2
    printf("Nilai maksimum ke-2 adalah %d\n", max2);

    return 0;
}