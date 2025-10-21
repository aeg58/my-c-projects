#include <stdio.h>

int main(){
    char mesaj[] = "Merhaba";
    printf("%s\n",mesaj);
    int *p = mesaj;
    printf("*p = ",*p);
    return 0;
}