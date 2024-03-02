#include <stdio.h>

int main()
{
    int g[] = {4, 3, 2, 6, 2, 1, 4, 5, 1};
    float k = 0;
    int i;
    for (i = 0; i < sizeof(g)/sizeof(g[0]); i++)
    {
        k=k + (float)g[i];
    }
    k = k/(float)i;
    printf("Der Durchschnitt der Noten liegt bei: %.1f\n", k);
    return 0;
}