#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    struct Student s1;
    s1.name = 'Ali";
    s1.age = 21;
    s1.grade = 90;

    printf("Name : %s\n, Age : %d\n,Grade : %d\n",s1.name, s1.age, s1.grade);
}
