#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("enter the farst value => ");
    scanf("%d", &a);
    printf("enter the sac. value => ");
    scanf("%d", &b);
    printf("enter the tharde value => ");
    scanf("%d", &c);
    printf("enter the forth value => ");
    scanf("%d", &d);

    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    printf("a moti che !");
                }
                else
                {
                    printf("d moti che !");
                }
            }
            else
            {
                if (c > d)
                {
                    printf("c moti che !");
                }
                else
                {
                    printf("d moti che !");
                }
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    printf("b moti che !");
                }
                else
                {
                    printf("d moti che !");
                }
            }
            else
            {
                if (c > d)
                {
                    printf("c moti che !");
                }
                else
                {
                    printf("d moti che !");
                }
            }
        }
    }
    else
    {
        printf("kem tyu ?");
    }
}