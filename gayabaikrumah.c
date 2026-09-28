#include <stdio.h>

int main(void) {
    int tegangan = 220;
    float arus = 0.5;
    double resistansi = 440.0;

    printf("V=%d I=%.1f R=%.11f\n", tegangan, arus, resistansi);

    return 0;
}