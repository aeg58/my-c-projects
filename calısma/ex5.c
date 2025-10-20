#include <stdio.h>

int main(void) {
    int secim;
    do {
        printf("\n=== Menü ===\n");
        printf("1. Merhaba yaz\n");
        printf("2. Sayıları topla\n");
        printf("3. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Merhaba, C öğreniyorsun!\n");
                break;
            case 2: {
                int a, b;
                printf("İki sayı gir: ");
                scanf("%d %d", &a, &b);
                printf("Toplam: %d\n", a + b);
                break;
            }
            case 3:
                printf("Program sonlandırıldı.\n");
                break;
            default:
                printf("Geçersiz seçim!\n");
        }
    } while (secim != 3);

    return 0;
}
