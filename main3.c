#include <stdio.h>

int main() {
    float angka1, angka2, hasil;

    printf("=== PROGRAM PEMBAGIAN ===\n");
    printf("Masukkan angka yang dibagi: ");
    scanf("%f", &angka1);
    printf("Masukkan angka pembagi: ");
    scanf("%f", &angka2);

    if (angka2 != 0) {
        hasil = angka1 / angka2;
        printf("Hasil pembagian: %.2f\n", hasil);
    } else {
        printf("Error: Angka tidak bisa dibagi dengan 0!\n");
    }

    return 0;
}
