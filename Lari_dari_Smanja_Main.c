#include <stdio.h>
#include <stdlib.h>

int main() {
    int HP = 100;
    int Max_HP = 100;
    int mbg_heal = 50;
    int stok_mbg = 5;
    int temporary_hp = HP + mbg_heal;
    int bonus_damage = 0;
    int Attack = 10;
    int Fused_attack = Attack + bonus_damage;
    int DA_HP = 150;
    int DA_Attack = 15;
    int pilihan;
    printf("Hmmm... Pokoknya ini ceritanya lagi Kegiatan Santi(Sangga inti), kita harus ngelawan salah satu anggota Dewan Ambalan karena habis kabur di hari Jum'at\nStat kamu saat ini adalah\nHP: %d\nAttack: %d\nDA yang kamu lawan memiliki stat:\nHP: %d\nAttack: %d\nPIlih disitu apa aja gapapa buat ngalahin si DA ngeselin itu:\n", HP, Attack, DA_HP, DA_Attack);
    printf("1. Serang DA make tinjumu (resiko tinggi, tapi ngasih damage gede)\n");
    printf("2. Make shield buat negate damage dari DA (nyerap 50%% damage dari DA)\n");
    printf("3. Lari dari DA (ngapain juga ngelawan dia kan)\n");
    printf("4. Makan gula jawa buat ningkatin damage sebesar 200%% (DA bakal kebingungan karena gula jawa itu dipake buat penjelajahan di PBA sebenarnya)\n");
    printf("5. Makan mbg buat flat health regen sebesar 50 hp (kalo HP melebihi 100, sisa HP berlebih bakal jadi buff damage (0.25 damage per 1 HP berlebih))\n");

    do {
        printf("AKSIMU! (1, 2, 3, 4, 5): ");
        scanf("%d", &pilihan);
        
        switch (pilihan) {
            case 1:
                Fused_attack = Attack + bonus_damage;
                DA_HP -= Fused_attack;
                HP -= DA_Attack;
                printf("Kamu memilih untuk menyerang DA dengan tinjumu. Kamu berhasil ngasih damage besar, tapi DA juga menyerang balik dan mengurangi HP-mu.\n");
                break;
            case 2:
                HP -= (DA_Attack / 2);
                printf("Kamu memilih untuk membuat shield. Kamu berhasil menyerap sebagian besar damage dari DA, tapi kamu tidak memberikan damage balik.\n");
                break;
            case 3:
                HP -= 100;
                printf("Kamu memilih untuk lari dari DA. Kamu berhasil kabur, keren....\n");
                break;
            case 4:
                Attack *= 3;
                HP -= DA_Attack;
                printf("Kamu memilih untuk makan gula jawa. Damage-mu meningkat sebesar 200%%, tapi DA juga menyerangmu.\n");
                break;
            case 5:
                if (stok_mbg > 0) {
                    stok_mbg--;
                    int temporary_hp = HP + mbg_heal;

                    if (temporary_hp > Max_HP) {
                        int excess_hp = temporary_hp - Max_HP;
                        bonus_damage = (excess_hp * 1) / 4;
                        HP = Max_HP;
                        printf("Kmau makan embeege sampe kekenyangan, sehingga damage-mu meningkat sebesar %d\n", bonus_damage);
                    } else {
                        HP = temporary_hp;
                        printf("Kmau makan embeege dan hp nya saat ini adalah %d\n", temporary_hp);
                    }    
                } else {
                    printf("Stoknya abis. Pilih yang lain.\n");
                }
                break;
            default:
                HP += (DA_Attack * 1000);
                printf("GAK MILIH APA APA? KESALAHAN BESAR. DA menyerangmu tanpa perlawanan dan damagenya meningkat sebesar 10000%%.\nABSOLUTELY OBLITERATED\n");
                break;
        }

        printf("HP-mu ada di %d, sedangkan si DA ada di %d\n", HP, DA_HP);

    } while (HP > 0 && DA_HP > 0 && pilihan != 3);

    if (HP <= 0) {
        printf("Kamu kalah melawan DA. Semoga lain kali bisa lebih baik.\nSilahkan untuk pergi ke program Lari_Dari_Smanja_E1 untuk melanjutkan cerita.\n");
    } else if (DA_HP <= 0) {
        printf("Selamat! Kamu berhasil mengalahkan DA!\nSilahkan untuk pergi ke program Lari_Dari_Smanja_E2 untuk melanjutkan cerita.\n");
    } else if (pilihan == 3) {
        printf("Kamu berhasil kabur dari DA. Sampai jumpa lagi!\nSilahkan untuk pergi ke program Lari_Dari_Smanja_E3 untuk melanjutkan cerita.\n");
    }

    return 0;
}