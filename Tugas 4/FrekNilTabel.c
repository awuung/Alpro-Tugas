/* Nama File            : FrekNilTabel.c */
/* Deskripsi            : Memasukan dan Mengecek nilai tabel yang muncul lebih dari 1 */
/* Pembuat              : Awang Pratama Putra Mulya / 24060122120039*/
/* tanggal pembuatan    : 17/03/2023*/


#include <stdio.h>
#include <stdlib.h>


int main()
{

    /*Kamus*/

    int T[100]; // deklarasi tabel T dengan maksimal 100 elemen
    int N, i, j, count;

    /*Algoritma*/

    printf("Masukkan jumlah elemen tabel T: ");
    scanf("%d", &N);

    printf("Masukkan elemen tabel T: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    printf("Elemen tabel T dengan frekuensi kemunculan lebih dari satu kali adalah: ");

    // Cek semua elemen pada tabel
    for(i=0; i<N; i++){
        count = 1;
        // Cek elemen-elemen setelah elemen yang sedang dicek
        for(j=i+1; j<N; j++){
            if(T[i] != 0 && T[i] == T[j]){
                count++;
                T[j] = 0; // Menghindari elemen dihitung ulang
            }
        }
        // Jika kemunculan elemen lebih dari satu, tampilkan elemen tersebut
        if(count != 1){
            printf("%d ", T[i]);
        }
    }

    return 0;
}