#include <stdio.h>

int main()
{

    int start, end;

    printf("enter your item => ");
    scanf("%d", &start);
    printf("enter your item => ");
    scanf("%d", &end);

    while (start <= end)
    {
        if (start % 4 == 0)
        {
            printf("%d\n", start);
        }
        start++;
    }
}