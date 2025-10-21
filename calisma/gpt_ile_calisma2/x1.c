#include <stdio.h>

int main(void) {
    char mesaj[] = "Merhaba";
    char *p = mesaj;

    while (*p != '\0')
    {
        printf("%c ", *p);
        p= p;
    }
    return 0;
}
