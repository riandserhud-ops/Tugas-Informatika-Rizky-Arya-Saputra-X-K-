#include <stdio.h>

int main() {
    float angka, total, hasil;

    printf("=== PROGRAM PERSENTASE ===\n");
    printf("Masukkan angka bagian: ");
    scanf("%f", &angka);
    printf("Masukkan total keseluruhan: ");
    scanf("%f", &total);

    if (total != 0) {
        hasil = (angka / total) * 100;
        printf("Hasil: %.2f%%\n", hasil);
    } else {
        printf("Error: Total keseluruhan tidak boleh 0!\n");
    }

    return 0;
}
