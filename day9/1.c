#include <stdio.h>

int main()
{

    int score;
    char grade;

    printf("Enter your marks => ");
    scanf("%d", &score);

    grade = (100 < score) ? '*' : (0 > score) ? '*'
                              : (80 < score)  ? 'A'
                              : (60 < score)  ? 'B'
                              : (40 < score)  ? 'C'
                              : (33 < score)  ? 'D'
                                              : 'f';

    printf("Your grade is => %c\n", grade);

    switch (grade)
    {
    case 'A':
        printf("va kya seen hai ! \n");
        break;
    case 'B':
        printf("saras\n");
        break;
    case 'C':
        printf("Good job\n");
        break;
    case 'D':
        printf("You passed, but you could do better\n");
        break;
    case 'f':
        printf("sorry bhai tu fail thayo\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        printf("Congratulations! You are eligible for the next level\n");
    }
    else if (grade == 'f')
    {
        printf("Please try again next time\n");
    }
    else
    {
        printf("Invalid grade for heck\n");
    }
}
