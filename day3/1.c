#include <stdio.h>

int main()
{

    int a, b;

    printf("enter the ferst value => ");
    scanf("%d", &a);
    printf("enter the sec. value => ");
    scanf("%d", &b);

    if (a < b)
    {
        printf("minimum number => %d", a);
    }
    else
    {
        printf("minimum number => %d", b);
    }
}