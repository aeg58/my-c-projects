#include <stdio.h>

int main() {
    char mesaj[] = "Merhaba";
    char *p = &mesaj[0];

    printf("mesaj dizisi: %s\n", mesaj);
    printf("mesaj[0] karakteri: %c\n", *p);
    printf("mesaj dizisinin adresi: %p\n", (void*)mesaj);
    printf("p pointer'ının tuttuğu adres: %p\n", (void*)p);
    printf("p değişkeninin kendi adresi: %p\n", (void*)&p);

    return 0;
}
