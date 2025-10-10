#include<stdio.h>
int main()
{
 int n = 7;
 int *ptr;
 ptr = &n;
 printf("Value of Number: %d\n",n);
 printf("Value using pointer: %d\n",*ptr);
 printf("Address of Number: %p\n",&n);
 printf("Address stored in pointer: %p\n",ptr);
 return 0;
}
