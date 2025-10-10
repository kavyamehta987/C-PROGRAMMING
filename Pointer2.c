#include<stdio.h>
int main()
{
 int n = 7;
 int *ptr;
 ptr = &n;
 printf("Original value of Number: %d\n",n);
 printf("Value using pointer: %d\n",*ptr);
 *ptr = 10;
 printf("After changing the value: \n");
 printf("Value of Number: %d\n",n);
 printf("Value using pointer: %d",*ptr);
 return 0;
}
