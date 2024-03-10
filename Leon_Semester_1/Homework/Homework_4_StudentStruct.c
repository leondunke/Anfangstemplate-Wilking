#include <stdio.h>
enum { MAX_N = 50, MAX_G = 100 };

    struct student
    {
        long matrikelnummer;
        char name[MAX_N];
        int grades[4];
    };

int main ()
{
    struct student student_leon = {.matrikelnummer = 465, .name= "Leon Dunke", .grades= {1, 4, 7}};

    printf("Das ist der erste Student:\n Matrikelnummer = %ld\n  Name = %s\n Grades = %ls\n\n", student_leon.matrikelnummer, student_leon.name, student_leon.grades);

    struct student studentLuca = {968, "Luca Lubic", {4, 5, 1, 3}};

    printf("Das ist der zweite Student:\n Matrikelnummer = %ld\n  Name = \033[4;35m%s\033[0m\n Grades = ", studentLuca.matrikelnummer, studentLuca.name);
    int indexGrade = 0;

    for (indexGrade = 0; indexGrade < sizeof(studentLuca.grades)/sizeof(studentLuca.grades[0]); indexGrade++)
    {
        if (studentLuca.grades[indexGrade] >= 4)
        {
        printf("\033[1;31m%i\033[0m,", studentLuca.grades[indexGrade]);
        }
        else{
        printf("%i,", studentLuca.grades[indexGrade]);
        }
    }
    
printf("\n");
return 0;
}