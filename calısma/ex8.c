#include <stdio.h>

int main(void) {
    int sayi = 10;
    int *ptr;        // pointer tanımlama
    ptr = &sayi;     // sayi'nin adresini ptr'ye ata

    printf("sayi değeri: %d\n", sayi);
    printf("sayi adresi: %p\n", &sayi);
    printf("ptr'nin tuttuğu adres: %p\n", ptr);
    printf("ptr'nin gösterdiği değer: %d\n", *ptr);

    return 0;
}
