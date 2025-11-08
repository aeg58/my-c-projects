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

    strcpy(students[2].name, "Mehmet");
    students[2].age = 20;
    students[2].grade = 88;

    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s, Age: %d, Grade: %.2f\n", students[i].name, students[i].age, students[i].grade);
    }
}
