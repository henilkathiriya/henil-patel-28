#include <stdio.h>
int main()
{

    float c, f;

    printf("enter the value = ");
    scanf("%f", &c);

    f = (1.8 * c) + 32;
    printf("formula : %.1f", f);
}