/* Nama File            : SimetriTabel.c */
/* Deskripsi            : Memasukan Dan mengecek apakah kedua tabel tersebut simetri */
/* Pembuat              : Awang Pratama Putra Mulya / 24060122120039*/
/* tanggal pembuatan    : 17/03/2023*/


#include <stdio.h>
#include <stdlib.h>

int main() 
{

    /*Kamus*/

    int N; // inisialisasi N
    int M; // inisialisasi M
    int T1[100]; // inisialisasi T1
    int T2[100]; // inisialisasi T2
    int i;// counter

    /*Algoritma*/

    printf("Masukkan ukuran T1: ");
    scanf("%d", &N);


    printf("Masukkan ukuran T2: ");
    scanf("%d", &M);


    if (N == M) { // jika N sama dengan M
        int count = 0; // inisialisasi count

        printf("Masukkan elemen T1: ");
        for (i = 0; i < N; i++) {
            scanf("%d", &T1[i]);
        }

        printf("Masukkan elemen T2: ");
        for (i = 0; i < M; i++) {
            scanf("%d", &T2[i]);
        }

        for ( i = 0; i < N; i++) { // traverse i dari 0 hingga N-1
            if (T1[i] == T2[i]) { // jika elemen ke-i di T1 sama dengan elemen ke-i di T2
                count++; // tambahkan 1 ke count
            }
        }
        if (count == N) { // jika semua elemen bernilai sama
            printf("Simetri\n"); // output "Simetri"
        } else { // jika tidak semua elemen bernilai sama
            printf("Tidak Simetri\n"); // output "Tidak Simetri"
        }
    } else { // jika N tidak sama dengan M
        printf("Tidak Simetri\n"); // output "Tidak Simetri"
    }
    return 0; // kembalikan nilai 0
}