#include <stdio.h>
#include <math.h>

int main() {
     double basis, pangkat, hasil;

    printf("Masukan angka basis: ");
    scanf("%lf", &basis);
    printf(" Masukan angka pangkat: ");
    scanf("%lf", &pangkat);
    
    hasil = pow(basis, pangkat);

    printf("%2.lf dipangkatkan %2.lf adalah: %2.lf\n", basis, pangkat, hasil);
    
    return 0;
}
