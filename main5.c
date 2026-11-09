#include <stdio.h>

int main() {
    float angka1, angka2;
    float jumlah, kali, bagi, persen;

    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    jumlah = angka1 + angka2;
    kali   = angka1 * angka2;
    
    if (angka2 != 0) {
        bagi = angka1 / angka2;
    } else {
        bagi = 0;
    }

    if (angka2 != 0) {
        persen = (angka1 / angka2) * 100;
    } else {
        persen = 0;
    }

    printf("\n=== HASIL PERHITUNGAN ===\n");
    printf("Penjumlahan (%.2f + %.2f) = %.2f\n", angka1, angka2, jumlah);
    printf("Perkalian   (%.2f * %.2f) = %.2f\n", angka1, angka2, kali);
    
    if (angka2 != 0) {
        printf("Pembagian   (%.2f / %.2f) = %.2f\n", angka1, angka2, bagi);
        printf("Persentase  (%.2f dari %.2f) = %.2f%%\n", angka1, angka2, persen);
    } else {
        printf("Pembagian   = Tidak bisa dibagi dengan 0\n");
        printf("Persentase  = Tidak bisa dihitung karena angka kedua 0\n");
    }

    return 0;
}
