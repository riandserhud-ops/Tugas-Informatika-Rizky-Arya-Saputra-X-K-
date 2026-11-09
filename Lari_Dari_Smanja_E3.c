#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int hp = 1000;
    int atk = 250;
    int final_damage = atk * 5;
    int eu = 0;
    int hu = 0;
    int final_ultimate = (atk * 25) + ((eu + hu) * 2);
    int max_hp = 100;
    int energy = 500;
    int max_energy = 500;
    int courage = 0;
    int c1 = 25;
    int c5 = 50;
    int stok_susu_nobo = 5;
    int stok_onigiri = 5;
    int endurance = 0;
    int boss_hp = 100000;
    int boss_atk = 75;
    int final_parry = boss_atk / 2;
    int PSM = 1;
    int vulnerability = 0;
    int max_vulnerability = 1;
    int bribe = 0;
    int pilihan;
    srand(time(NULL));

    printf("Datang mamat di Ending 3 series Lari Dari Smanja!\n");
    printf("Kamu berhasil lolos dari pertarungan melelahkan itu, dan kamu lari terbirit birit menuju gerbang masuk dekat SM.\nTiba tiba kamu menabrak seorang satpam dan memicu sebuah Secret Boss Fight! kamu harus MELAWANNYA!\n");
    printf("Bersiaplah, pertarungan akan dimulai dari.... Sekarang!\n");
    
    do {
        printf("HP Kamu : %d\nEnergi kamu : %d\nCourage : %d\nHP Satpam : %d\n", hp, energy, courage, boss_hp);
        printf("Pilih aksimu!\n");
        printf("1. Serangan biasa (500%% ATK) konsumsi 10 energi, stack courage +25\n");
        printf("2. Serangan beruntun ( 500%% ATK * 5) konsumsi 50 energi, stack courage +50\n");
        printf("3. Defense (-50%% boss damage) konsumsi 12 energi, 25%% chance untuk parry dan memantulkan damage boss sebesar 50%%, konsumsi 0 energi\n");
        printf("4. Minum susu Nobo (Max HP Boost 25%% HP) regenerasi 150 energi\n");
        printf("5. Distract Boss (memberikan efek vulnerability yang meningkatkan damage diterima sebesar 250%%) konsumsi 60 energi\n");
        printf("6. Pergi ke dalam SM untuk membuat boss kehilangan jejak kita (25%% chance) konsumsi 0 energi, dan jika dipakai >1 akan membuat boss memasuki status enrage (boss damage boost 100%%)\n");
        printf("7. Memberikan ungkapan damai ke Pak Satpam (10%% chance untuk membuat Pak Satpam membaik dan menghindari pertarungan, stack cbance dapat ditumpuk, konsumsi 5 energi)\n");
        printf("8. Makan Onigiri di SM (175%% ATK Boost, heal dari 25%% max HP) konsumsi 0 energi\n");
        printf("9. Menyamping untuk menghindari boss (20%% chance), dan jika gagal akan mendapatkan damage fatal dari Pak Satpam (Boss Damage * 10) konsumsi 40 energi\n");
        printf("10. Ultimate: mengonsumsi semua HP dan Energi sampai tersisa 1 kecuali energi (2500%% ATK + Jumlah HP & energi yang hilang, setiap poin dihitung 2, memerlukan 100 courage untuk mengaktifkan ultimate)\n");
        printf("Pilih aksimu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                if (energy >= 10) {
                    int final_damage = atk * 5;
                    if (vulnerability > 0) {
                        final_damage *= 2.5;
                        vulnerability --;
                    }
                    boss_hp -= final_damage;
                    courage += c1;
                    hp -= boss_atk;
                    energy -= 10;
                    printf("Kamu berhasil melancarkan serangan! Pak Satpam itu menjerit kesakitan (boong).\n");
                } else {
                    printf("Maaf, tapi energimu tidak cukup!\n");
                }
                break;
            case 2:
                if (energy >= 50) {
                    int final_damage = (atk * 5) * 5;
                    if (vulnerability > 0) {
                        final_damage *= 2.5;
                        vulnerability --;
                    }
                    boss_hp -= (final_damage * 5);
                    courage += c5;
                    hp -= boss_atk;
                    energy -= 50;
                    printf("Kamu berhasil melancarkan serangan! Pak Satpam itu menjerit kesakitan (boong).\n");
                } else {
                    printf("Maaf, tapi energimu tidak cukup!\n");
                }
                break;
            case 3:
                if (energy >= 12 ) {
                    energy -= 12;
                    hp -= (boss_atk / 2);
                    printf("Kamu berhasil memblokir sebagian besar damage dari Pak Satpam\n");

                    if (rand() % 100 < 25) {
                        if (vulnerability > 0) {
                            final_parry *= 2.5;
                            vulnerability --;
                        }
                        energy += 12;
                        hp += (boss_atk / 2);
                        boss_hp -= final_parry;
                        printf("Kamu berhasil menangkis serangan dari Pak Satpam!\n");
                    }
                } else {
                    printf("Maaf, tapi energimu tidak cukup!\n");
                }
                break;
            case 4:
                if (stok_susu_nobo > 0) {
                    if (vulnerability > 0) {
                        vulnerability --;
                    }
                    stok_susu_nobo --;
                    max_hp += (max_hp / 4);
                    energy += 150;
                    hp -= boss_atk;

                    if (energy > max_energy) {
                        energy = max_energy;
                        printf("Glukglukgluk, max hp meningkat dan energy dipulihkan!\n");
                    } else {
                        printf("Glukglukgluk, max hp meningkat dan energy dipulihkan!\n");
                    }
                } else {
                    printf("Susu nobonya habis! jangan lagi lagi make opsi ini ya!");
                }
                break;
            case 5:
                if (energy >= 60) {
                    energy -= 60;

                    if (vulnerability == 0) {
                        vulnerability += max_vulnerability;
                        printf("Pak Satpam itu terdistraksi oleh pengendara motor yang lewat dengan knalpot brong, spion copot semua, gak pake helm. Vulnerability aktif!\n");
                    } else {
                        printf("Pak Satpamnya udah kena vulnerability, gak bisa di stack ya turnnya\n");
                    }
                } else {
                    printf("Maaf, tapi energimu tidak cukup!\n");
                }
                break;
            case 6:
                if (PSM > 0) {
                    if (vulnerability > 0) {
                        vulnerability --;
                    }
                    PSM --;
                    if (rand () % 100 < 25) {
                        boss_hp = 0;
                        printf("Selamat! kamu berhasil keluar dari pertempuran dengan selamat dan Pak Satpam kehilangan jejakmu!\n");
                    } else {
                        printf("Maaf, tapi Pak Satpam masih bisa menemukanmu dan kamu harus melanjutkan pertarungannya...\n");
                    }
                } else {
                    boss_atk *= 2;
                    hp -= boss_atk;
                    printf("Boss memasuki mode Enrage! damage yang diakibatkannya meningkat drastis!\n");
                }
                break;
            case 7:
                if (energy >= 5) {
                    if (vulnerability > 0) {
                        vulnerability --;
                    }
                    bribe += 10;
                    energy -= 5;
                    if (rand() % 100 < bribe) {
                        boss_hp = 0;
                        printf("Kamu berhasil mendamaikan Pak Satpam! Menang deh...\n");
                    } else {
                        hp -= boss_atk;
                        printf("Kamu gagal mendamaikan Pak Satpam! coba lagi lain kali\n");
                    }
                } else {
                    printf ("Maaf, tapi energimu tidak cukup!\n");
                }
                break;
            case 8:
                if (stok_onigiri > 0) {
                    if (vulnerability > 0) {
                        vulnerability --;
                    }
                    stok_onigiri --;
                    atk *= 2.75;
                    hp -= boss_atk;
                    hp += (max_hp / 4);
                    printf("Nyamnyamnyam, ATK meningkat dan DMG absorption ditambahkan!\n");                    
                } else {
                    printf("Stok onigirinya habis! jangan milih ini lagi yaa!\n");
                }
                break;
            case 9:
                if (energy > 40) {
                    if (vulnerability > 0) {
                        vulnerability --;
                    }        
                    energy -= 40;        
                    if (rand () % 100 < 20) {
                        boss_hp = 0;
                        printf("Selamat! kamu berhasil menghindari boss dan langsung pergi keluar gerbang buat pulang!\n");
                    } else {
                        hp -= (boss_atk * 10);
                        printf("Pak Satpam menyerangmu di bagian vital! kamu menerima damage besar!\n");
                    }
                } else {
                    printf("Maaf, tapi energimu tidak cukup!");
                }
                break;
            case 10:
                if (courage >=100) {
                    courage -= 100;
                    eu += energy;
                    energy = 0;
                    hu += (hp - 1);
                    hp = 1;
                    int final_ultimate = (atk * 25) + ((eu + hu) * 2);
                    if (vulnerability > 0) {
                        final_ultimate *= 2.5;
                        vulnerability --;
                    }
                    boss_hp -= final_ultimate;
                    printf("Ultimate berhasil dilancarkan dan Pak Satpam menerima DMG dalam jumlah besar!\n");
                } else {
                    printf ("Maaf, tapi stack courage tidak cukup!");
                }
                break;
            }

    } while ( hp > 0 && boss_hp > 0);

    if (hp <= 0) {
        printf("GAME OVER! Pak Satpam menarikmu masuk ke dalam sekolah lagi dan siklus berulang. Bad Ending.");
    }
    if (boss_hp <= 0) {
        printf("Selamat! kamu berhasil lolos dari kejaran Pak Satpam dan mendapatkan julukan Edgerunner. Good Ending");
    }
    if (hp <= 0 && boss_hp <= 0) {
        printf ("Seri! Kalian berdua masuk UKS dan kamu berujung dipaksa melakukan kegiatan juga. Bad Ending");
    }
    return 0;
}