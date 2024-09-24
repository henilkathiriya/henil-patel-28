#include <stdio.h>

int main()
{

    int rowsize, colsize, bhai  = 0;

    printf("enter the value => ");
    scanf("%d", &rowsize);

    printf("enter the value => ");
    scanf("%d", &colsize);

    int box[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            printf("value [%d][%d]=> ", i, j);
            scanf("%d", &box[i][j]);
        }
    }
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            if (box[i][j] > bhai)
            {
                bhai = box[i][j];
            }
        }
    }
    printf("================================\n");

    printf(" very big number is => %d", bhai);
}