#include <stdio.h>
int main()
{
    int h;
    int i;
    int k;
    int j;
    int z;
    int y =0;
    printf("Geben Sie die gewünschte Höhe des Dreiecks als ganze Zahl an: ");
    scanf("%i", &h);
    for (i = 0; i < h; i++)
    {
        for (k = 0; k < i+1; k++)
        {
           printf("*");
        }
        printf("\n");
    }
    printf("\n");
    i = 0; 
    for (i = 0; i < h; i++)
    {
        for (j=0;j <= k-1; j++)
        {
           printf(" ");
        }   
        k--;
        
        for (z = 0; z < y+1; z++)
        {
           printf("*");
        }
        y = y+2;
        printf("\n");
    }
    

    printf("\n");
    return 0;
}