#include <stdio.h>

int main(){
    char mesaj[] = "Merhaba";
    printf("%s\n",mesaj);
    char *p = &mesaj[0];
    printf("*p = ",p);
    return 0;
}