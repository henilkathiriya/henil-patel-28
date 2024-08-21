#include <stdio.h>

int main()
{

    int a;

    printf("enter the value =>  ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("This number is Negative => %d", a);
    }
    else if (0 == 0)
    {
        printf(" This number is Neutral => %d", a);
    }
    else
    {
        printf("This number is Positive  => %d", a);
    }
}