#include<stdio.h>

int main(){

    int a = 10, b = 47, d;

    printf("a=%d\n",a);
    printf("b=%d\n\n",b);

    d = a;
    a = b;
    b = d;

    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
