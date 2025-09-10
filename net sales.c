#include<stdio.h>
int main()
{
 float n,g,d;
 printf("Enter the Gross Sales:");
 scanf("%f",&g);
 d = g*0.10;
 n = g - d;
 printf("Net Sales: %f\n",n);
 printf("Given Discount: %f",d);
 return 0;
}
