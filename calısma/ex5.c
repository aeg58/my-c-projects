#include <stdio.h>

int main(void) {
    int a, b, secim;
    float sonuc;

    while (1) {
        printf("\n--- Hesap Makinesi ---\n");
        printf("1. Toplama\n");
        printf("2. Çıkarma\n");
        printf("3. Çarpma\n");
        printf("4. Bölme\n");
        printf("5. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &secim);

        if (secim == 5) {
            printf("Program sonlandırıldı.\n");
            break;
        }

        printf("İki sayı girin: ");
        scanf("%d %d", &a, &b);

        switch (secim) {
            case 1:
                sonuc = a + b;
                printf("Sonuç: %.2f\n", sonuc);
                break;
            case 2:
                sonuc = a - b;
                printf("Sonuç: %.2f\n", sonuc);
                break;
            case 3:
                sonuc = a * b;
                printf("Sonuç: %.2f\n", sonuc);
                break;
            case 4:
                if (b != 0)
                    sonuc = (float)a / b;
                else {
                    printf("0'a bölme hatası!\n");
                    continue; // tekrar menüye dön
                }
                printf("Sonuç: %.2f\n", sonuc);
                break;
            default:
                printf("Geçersiz seçim!\n");
        }
    }

    return 0;
}
