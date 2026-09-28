#include <stdio.h>

int main(void) {
    float resistansi, tegangan, arus;

    /* Prompt dan membaca nilai resistansi, tegangan, arus */
    printf("Masukkan nilai Resistansi (Ohm): ");
    scanf("%f", &resistansi);

    printf("Masukkan nilai Tegangan (Volt): ");
    scanf("%f", &tegangan);

    printf("Masukkan nilai Arus (Ampere): ");
    scanf("%f", &arus);

    printf("\n--- Data Listrik ---\n");
    /* Menampilkan kembali ketiga nilai dengan 2 angka di belakang koma */
    printf("Resistansi (R) : %.2f Ohm\n", resistansi);
    printf("Tegangan (V)   : %.2f Volt\n", tegangan);
    printf("Arus (I)       : %.2f Ampere\n", arus);

    return 0;
}
  