#include <stdio.h>
#include <stdlib.h>

int main() {
    int tongkat, bayangan_tongkat, bayangan_pohon, tinggi_pohon;
    printf("Lanjutannya ini ya, jadi kamu berhasil ngalahin si DA dan dapet pembebasan hukum (di dunia nyata gak realistis, tapi di game ini bisa aja.\nKamu sekarang disuruh ke lapangan voli buat kumpul dan ngelanjutin buat apel pembukaan.\nWaktu berlalu agak lama sampai kamu disuruh untuk mengukur sebuah pohon dengan cara menaksir tinggi yang diajarkan saat Jum'at rutin.\nKalo gitu ayo mulai!\n");
    printf("kamu dikasih lembar kertas pertanyaan sama DA, dan kamu harus jawab pertanyaan itu dengan benar. Kalo salah, kamu bakal dikasih hukuman sama DA.\n");
    printf("Pertanyaan pertama adalah, Seorang anggota pramuka ingin menaksir tinggi sebuah pohon. Ia menancapkan tongkat pramuka sepanjang 1,6 meter secara tegak lurus di tanah. Bayangan tongkat tersebut di tanah memiliki panjang 0,8 meter, sedangkan bayangan pohon di tanah memiliki panjang 4 meter. Berapa tinggi pohon tersebut?\n");
    
    do {
        printf("Masukkan jawabanmu buat tinggi tongkat(dikalikan 10, misal 1 meter itu jadi 10): ");
        scanf("%d", &tongkat);

        if (tongkat != 16) {
            printf("Jawabanmu salah, coba lagi.\n");
        }

    } while (tongkat != 16);

    do {
        printf("Bener banget, sekarang tinggal bayangan tongkatnya(dikalikan 10, misal 1 meter itu jadi 10): ");
        scanf("%d", &bayangan_tongkat);

        if (bayangan_tongkat != 8) {
            printf("Jawabanmu salah, coba lagi.\n");
        }

    } while (bayangan_tongkat != 8);
    
    do {
        printf("Sekarang tinggal bayangan pohonnya(dikalikan 10, misal 1 meter itu jadi 10): ");
        scanf("%d", &bayangan_pohon);

        if (bayangan_pohon != 40) {
            printf("Jawabanmu salah, coba lagi.\n");
        }

    } while (bayangan_pohon != 40);

    tinggi_pohon = (tongkat * (bayangan_pohon / bayangan_tongkat)) / 10;
    printf("Tinggi pohon tersebut adalah %d meter. kamu pun menyerahkannya kepada damklotmu.\nSELESAIIIIIIIIIIIII", tinggi_pohon);

    return 0;
}