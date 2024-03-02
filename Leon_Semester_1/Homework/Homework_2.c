#include <stdio.h>
int main()
{
int values[] = {1, 2, 3, 4, 6};
float a = (float)(values[0] + values[1] + values[2] + values[3] + values[4]) / 5;
printf("Hello World!\n"); /*Das hier ist ein Kommentar. Ich gebe "Hello World!" aus*/
printf("Der Durchschnitt lautet: %.1f\n", a);
//Ab hier beginnt der zweite Teil der Hausaufgaben
int v = 189;
int p = 24;
float r = (float)v*p/100;
printf("%i Prozent von %i ist %.2f %%\n", p, v, r);

return 0;
}