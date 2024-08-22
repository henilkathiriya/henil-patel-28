#include <stdio.h>

int main()
{

    int a, b, c;

    printf("enter the farst value =>");
    scanf("%d", &a);
    printf("enter the sac. value =>");
    scanf("%d", &b);
    printf("enter the therde value =>");
    scanf("%d", &c);

    if (a != b && a != c && b != c)
    {
        if (a < b)
        {
            if (a < c)
            {
                printf("a nani che ! ");
            }
            else
            {
                printf("c nani che ! ");
            }
        }
        else
        {
            if (b < c)
            {
                printf("b nani che ! ");
            }
            else
            {
                printf("c nani che ! ");
            }
        }
    }
    else
    {
        printf("nay bhegu thay ? ");
    }
}