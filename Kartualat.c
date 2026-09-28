#include <stdio.h>

int main(void) {
    // Deklarasi variabel minimal satu char, int, dan float
    char kodeAlat = 'A';
    int tahunProduksi = 2026;
    float rentangMaks = 600.0;

    // Menampilkan kartu spesifikasi alat ukur
    printf("=========================================\n");
    printf("        KARTU SPESIFIKASI ALAT UKUR       \n");
    printf("=========================================\n");
    printf("Kode Alat          : %c\n", kodeAlat);
    printf("Tahun Produksi     : %d\n", tahunProduksi);
    printf("Rentang Maksimum   : %.1f Volt\n", rentangMaks);
    printf("=========================================\n");

    return 0;
}