#include<stdio.h>
int main()
{
 float a,b,c,T,A;
 printf("Enter the value of 1st Subject:");
 scanf("%f",&a);
 printf("Enter the value of 2nd Subject:");
 scanf("%f",&b);
 printf("Enter the value of 3rd Subject:");
 scanf("%f",&c);
 T = a+b+c;
 A = T/3;
 printf("Total = %f\n",T);
 printf("Average = %f",A);
}
