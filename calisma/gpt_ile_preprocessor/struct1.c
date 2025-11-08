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

    strcpy(students[1].name, "Ayse");
    students[1].age = 22;
    students[1].grade = 85;

    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
}
