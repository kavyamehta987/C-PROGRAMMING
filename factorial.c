#include<stdio.h>
int main()
{
 int i,n,factorial=1;
 printf("Enter any numberL:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  factorial*=i;
 }
 printf("Factorial of %d = %d",n,factorial);
 return 0;
}
