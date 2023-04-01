/* Nama File            : JumFrekNilTabel.c */
/* Deskripsi            : Memasukan Dan menjumlahkan masukan tabel yang kemunculan lebih dari satu */
/* Pembuat              : Awang Pratama Putra Mulya / 24060122120039*/
/* tanggal pembuatan    : 17/03/2023*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{

    /*Kamus*/

    int T[100]; // deklarasi tabel T dengan maksimal 100 elemen
    int N;
    int i, j;
    int count;
    int sum = 0;

    /*Algoritma*/

    printf("Masukkan jumlah elemen tabel T: ");
    scanf("%d", &N);

    printf("Masukkan elemen tabel T: ");
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    printf("Jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah: ");

    // traversal untuk cek semua elemen yang sama
    for (i = 0; i < N; i++) {
        count = 1; // inisialisasi variabel count
        if (T[i] != 0) { 
            // traversal untuk mencari elemen yang sama
            for (j = i + 1; j < N; j++) {
                if (T[i] == T[j]) { 
                    count++; 
                    T[j] = 0; 
                }
            }
            if (count != 1) { // jika kemunculan lebih dari satu
                sum += count * T[i]; // tambahkan kemunculan x nilai elemen ke sum
            }
        }
    }

    printf("%d", sum); // output hasil sum
    return 0;
}
