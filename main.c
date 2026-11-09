#include <stdio.h>

int main() {
    float angka1, angka2, hasil;

    printf("=== PROGRAM PERKALIAN ===\n");
    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    hasil = angka1 * angka2;
    printf("Hasil perkalian: %.2f\n", hasil);

    return 0;
}
