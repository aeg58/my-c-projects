#include <stdio.h>
#define square(x) ()


int main() {
   float r;
   printf("Enter radius : ");
   scanf("%f",&r);

   float area = r*r*PI;
   printf("Area is : %.2f",area);
}
