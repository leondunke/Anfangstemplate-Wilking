#include <stdio.h>

int main()
{
    int v;
    printf("Enter a value:");
    scanf("%i", &v);
    if(v % 4 == 0)
    {
        printf("Das Jahr %i ist ein Schaltjahr\n", v);
    }
    else
    {
        printf("Das Jahr %i ist kein Schaltjahr\n", v);
    }
    return 0;
}