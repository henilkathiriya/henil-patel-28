#include <stdio.h>

int main()
{

    float h,p,k;

    printf("first side = ");
    scanf("%f", &h);

    printf("second side = ");
    scanf("%f",&p);

    k = 180 - (p + p);
    printf("third side = %f",k);


}