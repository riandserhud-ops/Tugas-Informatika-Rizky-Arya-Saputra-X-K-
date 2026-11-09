#include <stdio.h>
#include <stdlib.h>

int main() {
    int piihan;
    printf("Selamat datang di Lari dari Smanja!\n");
    printf("Di hari jum'at sesi siang, kamu menatap ke arah jendela samping kelas sambil menunggu bel pulang berbunyi.\nTiba-tiba kamu baru ingat kalau teman-temanmu sudah bersiap membawa atribut pramuka untuk persiapan jum'at rutin, tapi kamu terlalu malas untuk kegiatan itu, jadi kamu memilih untuk...\n");
    printf("1. Lari dari kelas dan pulang ke rumah\n");
    printf("2. Tetap di kelas dan bersiap untuk kegiatan jutin meskipun tertekan\n");
    printf("Masukkan pilihanmu (1,2, atau ???): ");
    scanf("%d", &piihan);

    switch (piihan) {
        case 1:
            printf("Kamu memutuskan untuk lari dari kelas dan pulang ke rumah. Namun, saat kamu berlari, DA melihatmu dan mengejarmu. Kamu berhasil lolos, tapi kamu harus menghadapi konsekuensi dari tindakanmu.\n");
            break;
        case 2:
            printf("Kamu tetap di kelas dan bersiap untuk kegiatan jutin meskipun tertekan. Meskipun awalnya sulit, kamu akhirnya menikmati kegiatan tersebut dan merasa bangga dengan dirimu sendiri.\n");
            break;
        default:
            printf("Sengaja banget bu milih ini, ngga ada secret ending kok hehehehhhe\n");
            break;
    }
    return 0;
}