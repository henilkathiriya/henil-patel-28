#include <stdio.h>
int main()
{

    int user, first = 0, second = 1, tird;

    printf("Enter the number : ");
    scanf("%d", &user);

    for (int start = 1; start <= user; start++)
    {
        printf("%d\n", first);

        tird = first + second;
        first = second;
        second = tird;
    }
}