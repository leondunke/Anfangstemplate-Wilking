#include <stdio.h>
#define MAX_N 50
#define MAX_G 100

    struct student
    {
        long matrikelnummer;
        char name[MAX_N];
        int grades;
    };

int main ()
{
    struct student Leon = {736, "Leon Dunke", 1};

    printf("Das ist der erste Student:\n Matrikelnummer = %ld\n  Name = %s\n Grades = %i\n", Leon.matrikelnummer, Leon.name, Leon.grades);

//Hier kommt Teil 2 der Hausaufgabe:
int k=3;
int p=5;
int *pk;
int *pp;
printf("k: %i\n p: %i\n", k, p);
pp = &p;
pk = &k;
k = *pp;
p = *pk;
printf("k: %i\n p: %i\n", k, p);
    return 0;
}