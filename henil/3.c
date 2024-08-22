#include <stdio.h>
int main()
{

    int p, q, r;

    printf("first side = ");
    scanf("%d", &p);

    printf("second side = ");
    scanf("%d", &q);

    r = 180 - (p + q);
    printf("third side : %d", r);
}