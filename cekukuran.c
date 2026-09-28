#include <stdio.h>

int main(void) {
    printf("=== Ukuran Tipe Data pada Sistem ===\n");
    printf("Ukuran char   : %lu byte\n", sizeof(char));
    printf("Ukuran int    : %lu byte\n", sizeof(int));
    printf("Ukuran float  : %lu byte\n", sizeof(float));
    printf("Ukuran double : %lu byte\n", sizeof(double));

    return 0;
}