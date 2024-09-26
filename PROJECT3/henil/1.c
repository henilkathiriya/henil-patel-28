#include <stdio.h>

int calculator()
{

    printf("Press 1 for + \n");
    printf("Press 2 for - \n");
    printf("Press 3 for * \n");
    printf("Press 4 for / \n");
    printf("Press 5 for +- \n");

    int user, first, second;
    printf("Enter Any Number : ");
    scanf("%d", &user);

    printf("enter the peli value : ");
    scanf("%d", &first);

    printf("enter the biji value : ");
    scanf("%d", &second);

    switch (user)
    {
    case 1:
        printf("sum = %d ", (first + second));
        break;
    case 2:
        printf("Minus = %d ", (first - second));
        break;
    case 3:
        printf("Multiplication = %d ", (first * second));
        break;
    case 4:
        printf("Divide = %.2f ", ((float)first / second));
        break;
    case 5:
        printf("Mode = %d ", (first % second));
        break;

    default:
        printf("nahi chalega");
        break;
    }
}

int main()
{
    calculator();
}