
#include <stdio.h>

    int henil()
{

    int box;

    printf("enter the value => ");
    scanf("%d", &box);

    printf("ans => %d\n", box * box * box);
}

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        henil();
    }
}