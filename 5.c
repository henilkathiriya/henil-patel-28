#include <stdio.h>

int main(){

    int h = 30, p = 47;


    printf("h=%d\n", h);
    printf("p=%d\n\n",p);

    p = p - h;
    h = h + p;
    p = h - p;
    

    printf("h=%d\n", h);
    printf("p=%d\n\n",p);


    }