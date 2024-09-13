#include <stdio.h>

int main()
{
    for (int row = 5; row >= 1; row--)
    {
        for (int spa = 4; spa >= row; spa--)
        {
            printf("  ");
        }
        for (int col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }

        printf("\n");
    }
}