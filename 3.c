 #include<stdio.h>
 int main(){

     int h, p, answer;

     printf("enter the value of h = ");
     scanf("%d", &h);

     printf("enter the value of p = ");
     scanf("%d", &p);

     answer = (h * h * h )+(h * h * p + h * h * p + h * h * p) + (h * p * p + h * p * p + h * p * p) + (p * p * p);

     printf("answer = %d", answer);
 }
