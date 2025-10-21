#include <stdio.h>

int main(void) {
    char mesaj[] = "Merhaba";
    char *p = &mesaj[0];

    printf("p adresi      = %p\n", (void*)p);
    printf("p + 1 adresi  = %p\n", (void*)(p + 1));
    printf("p + 2 adresi  = %p\n", (void*)(p + 2));

    return 0;
}
