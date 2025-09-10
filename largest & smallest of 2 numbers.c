#include<stdio.h>

int main()
   {
    float x,y;
    printf("Enter first value:");
    scanf("%f",&x);
    printf("Enter second value:");
    scanf("%f",&y);
    if(x>y)
    {
    printf("%f is the largest number\n",x);
    }
    else
    if(y>x)
    {
    printf("%f is the largest number\n",y);
    }
    if(x<y)
    {
    printf("%f is the smallest number\n",x);
    }
    else
    if(y<x)
    {
    printf("%f is the smallest number\n",y);
    }
   }

