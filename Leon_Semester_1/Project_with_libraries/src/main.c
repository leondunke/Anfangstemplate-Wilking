#include <stdio.h>
#include "static.h"
#include "shared.h"
int main()
{
float x;
float y = 2.45;
x = y / 3.56;
y = y * (2 + x);
printf("Hello World!\n"); /*Das hier ist ein Kommentar. Ich gebe "Hello World!" aus*/
printf("Zwei Mal y plus x ergibt: %f\n", y);

int a = 5;
int b = 3;
int ret_val = add_integers(a, b);
printf("The sum of %d and %d is %d\n", a, b, ret_val);
print_smiley();
return 0;
}