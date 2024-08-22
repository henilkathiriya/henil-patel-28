#include <stdio.h>

int main()
{

    int salary;
    float HRA, DA, TA, GrossSalary;
    printf("base salary : ");
    scanf("%d", &salary);

    printf("HRA : ");
    scanf("%f", &HRA);

    printf("DA : ");
    scanf("%f", &DA);

    printf("TA : ");
    scanf("%f", &TA);

    GrossSalary = salary + (salary * HRA / 100) + (salary * DA / 100) + (salary * TA / 100);
    printf("gross salary : %f", GrossSalary);
}