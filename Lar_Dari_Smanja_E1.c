#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int main, sub_main, sub_sub_main;
    srand(time(NULL));

    printf("Selamat datag di Lari dari Smanja E1!\n");
    printf("Kamu habis dikalahin saama DA sebelumnya. Kamu pingsan dan dibawakan ke UKS.\nSetelah kamu sudah sadar dan merasa lebih baik, kamu memutuskan untuk pergi dari tempat itu. Tapi kamu baru sadar kalau kamu sedang diawasi dan akan diarahkan ke lapangan voli setelahnya.\nApa yang akan kamu lakukan agar lolos dari mata mereka?\n");
    printf("1. Lari dari UKS dan pergi lewat gang samping menuju ke parkir motor dekat kantin (resiko ketahuan oleh DA atau staff sekolah 25%%)\n");
    printf("2. Tetap di UKS dan pasrah untuk mengikuti Santi lagi)\n");
    printf("3.berjalan sambil merunduk perlahan menuju gerbang dekat SM saat DA yang mengawasi sedang tidak memperhatikan (resiko ketahuan oleh DA atau staff sekolah 75%%)\n");
    printf("Masukkan pilihanmu (1,2,3): ");
    scanf("%d", &main);

    switch (main) {
        case 1:
            if (rand() % 100 < 25) {
                printf("Kamu mencoba untuk lari dari UKS dan pergi lewat gang samping menuju ke parkir motor dekat kantin, tapi sayangnya kamu ketahuan oleh DA atau staff sekolah. Kamu harus menghadapi konsekuensi dari tindakanmu.\n");
            } else {
                printf("Kamu berhasil lari dari UKS dan pergi lewat gang samping menuju ke parkir motor dekat kantin tanpa ketahuan oleh DA atau staff sekolah. Kamu berhasil lolos dan membawa motormu pulang!\nTapi... kamu dihadang didepan gerbang SM oleh DA yang berjaga disitu.\nApa yang akan kamu lakukan?\n");
                printf("1. Tancap gas dan hindari DA-nya! (kemungkinan menabrak DA=20%%)\n");
                printf("2. Turun dari motor dengan raut pasrah dan pergi ke lapangan voli\n");
                printf("Masukkan pilihanmu (1 atau 2): ");
                scanf("%d", &sub_main);
                
                switch (sub_main) {
                    case 1:
                        if (rand() % 100 < 20) {
                            printf("Kamu malah menabrak DA dan jatuh dari motor. Kamu dikembalikan ke kegiatan dengan paksa dan menghadapi konsekuensi yang lebih berat.\n");
                        } else {
                            printf("Kamu berhasil tancap gas dan menghindari DA tanpa menabraknya. Kamu berhasil lolos dan membawa motormu pulang!\n");
                        }
                        break;
                    case 2:
                        printf("Kamu memutuskan untuk turun dari motor dengan raut pasrah dan pergi ke lapangan voli. Kamu harus menghadapi konsekuensi dari tindakanmu.\n");
                        break;
                    default:
                        printf("Masukin yang bener yahh.\n");
                        break;
                }
            }
            break;
        case 2:
            printf("Kamu tetap di UKS dan pasrah untuk mengikuti Santi lagi. Kamu harus menghadapi konsekuensi dari tindakanmu.\n");
            break;
        case 3:
            if (rand() %100 <75) {
                printf("Kamu mencoba untuk berjalan sambil merunduk perlahan menuju gerbang dekat SM saat DA yang mengawasi sedang tidak memperhatikan, tapi sayangnya kamu ketahuan oleh DA atau staff sekolah. Kamu harus menghadapi konsekuensi dari tindakanmu.\n");
            } else {
                printf("Kamu berhasil berjalan sambil merunduk perlahan menuju gerbang dekat SM saat DA yang mengawasi sedang tidak memperhatikan tanpa ketahuan oleh DA atau staff sekolah. Kamu berhasil membawa dirimu pulang! yah, motornya ngga sih soalnya ini alt ending:)\n");
            }
            break;
        default:
            printf("Masukin yang bener yahh.\n");
            break;
    }
    return 0;
}