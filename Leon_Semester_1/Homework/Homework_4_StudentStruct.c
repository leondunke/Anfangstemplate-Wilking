#include <stdio.h>
#define MAX_N 50
#define MAX_G 100

    struct student
    {
        long matrikelnummer;
        char name[MAX_N];
        int grades[];
    };

int main ()
{
    struct student Leon = {.matrikelnummer = 465, .name= "Leon Dunke", .grades= {1, 4, 7};

    printf("Das ist der erste Student:\n Matrikelnummer = %ld\n  Name = %s\n Grades = %i\n\n", Leon.matrikelnummer, Leon.name, Leon.grades);

    struct student Luca = {968, "Luca Lubic", {4}};

    printf("Das ist der zweite Student:\n Matrikelnummer = %ld\n  Name = \033[4;35m%s\033[0m\n Grades = ", Luca.matrikelnummer, Luca.name);
    int i=0;

    for (i = 0; i < sizeof(Luca.grades)/sizeof(Luca.grades[0]); i++)
    {
        if (Luca.grades[i] >= 4)
        {
        printf("\033[1m%i\033[0m,", Luca.grades[i]);
        }
        else{
        printf("%i,", Luca.grades[i]);
        }
    }
    

return 0;
}