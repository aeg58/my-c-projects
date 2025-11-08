#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{
    struct Student students[3];

    strcpy(students[0].name, "Ali");
    students[0].age = 21;
    students[0].grade = 90;

    
}
