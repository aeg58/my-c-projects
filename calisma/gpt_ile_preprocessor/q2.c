#include <stdio.h>
#include "functions.h"   // tekrar include ediyoruz ama header guard sayesinde sorun yok

int main() {
    printf("%d\n", add(5, 3));
    return 0;
}
