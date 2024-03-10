#include<stdio.h>

int main ()
{
    int d;
    int i = 1;
    int k;
    int p = 0;
    unsigned long long b = 0;
    printf("Bitte die Dezimalnummer eingeben, die Sie in Binär sehen wollen: ");
    scanf("%i", &d);
    printf("Die Nummer in Dezimal lautet: %d\n", d);
    while (d >= 1)
    {
        k = d % 2;
        if (k == 1)
        {d--;}
        if (p != 0){
        k = k * (10*i);
        i = i * 10;
        }
        b = b + k;
        d = d/2;
        p++;
    }

    printf("Die Nummer in Binär lautet:\n %llu\n", b);
    return 0;
}