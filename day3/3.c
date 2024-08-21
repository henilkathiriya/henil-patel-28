#include <stdio.h>

int main()
{
    int a, b, c;
    float ans;

    printf("enter the mark-maths => ");
    scanf("%d", &a);
    printf("enter the mark-english => ");
    scanf("%d", &b);
    printf("enter the mark-science => ");
    scanf("%d", &c);

    ans = (a + b + c) / 3;

    if (a < 0 || b < 0 || c < 0 || a > 100 || b > 100 || c > 100)
    {
        printf("mark is wrong ");
    }
    else
    {
        printf("%d+%d+%d/3 => %f", a, b, c, ans);
    }
}