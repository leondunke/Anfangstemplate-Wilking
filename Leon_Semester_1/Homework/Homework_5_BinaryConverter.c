#include<stdio.h>

int main ()
{
    int d;
    int i = 0;
    int k;
    unsigned long long b = 0;
    printf("Bitte die Dezimalnummer eingeben, die Sie in Binär sehen wollen: ");
    scanf("%i", &d);
    printf("Die Nummer in Dezimal lautet: %d\n", d);
    while (d >= 1)
    {
        k = d % 2;
        if (k == 1)
        {d--;}
        k = k * (10^i);
        b = b + k;
        d = d/2;
        i++;
    }

    printf("Die Nummer in Binär lautet:\n %llu\n", b);
    return 0;
}