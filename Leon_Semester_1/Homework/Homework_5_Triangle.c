#include <stdio.h>
int main()
{
    int h;
    int i;
    int k;
    printf("Geben Sie die gewünschte Höhe des Dreiecks an: ");
    scanf("%d", h);
    for (i = 0; i < h; i++)
    {
        for (k = 0; k < i+1; k++)
        {
           printf("*");
        }
        printf("\n");
    }
    
    return 0;
}