/* Nama File            : JumBarkolMat.c */
/* Deskripsi            : Memasukan Dan menjumlahkan tabel masukan baris dan kolom */
/* Pembuat              : Awang Pratama Putra Mulya / 24060122120039*/
/* tanggal pembuatan    : 17/03/2023*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{

    /*Kamus*/

    int T[100][100]; // contoh tabel T
    int i, j, sumBaris, sumKolom;
    int n,m;

    /*Algoritma*/

        // input ukuran tabel T
    printf("Masukkan jumlah baris tabel T: ");
    scanf("%d", &n);
    printf("Masukkan jumlah kolom tabel T: ");
    scanf("%d", &m);

     // input elemen tabel T
    printf("Masukkan elemen tabel T:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &T[i][j]);
        }
    }

    // Menjumlahkan setiap elemen pada setiap baris
    for (i = 0; i < n; i++) {
        sumBaris = 0;
        for (j = 0; j < m; j++) {
            sumBaris += T[i][j];
        }
        printf("Baris ke-%d -> %d\n", i+1, sumBaris);
    }

    // Menjumlahkan setiap elemen pada setiap kolom
    for (j = 0; j < n; j++) {
        sumKolom = 0;
        for (i = 0; i < n; i++) {
            sumKolom += T[i][j];
        }
        printf("Kolom ke-%d -> %d\n", j+1, sumKolom);
    }

    return 0;
}