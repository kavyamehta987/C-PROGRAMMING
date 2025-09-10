#include<stdio.h>
int main()
{
 int n,sum=0;
 printf("Enter any number:");
 scanf("%d",&n);
 for(int i=2;i<=n;i=i+2)
  {
   sum+=i;

  }
  printf("Sum of Even numbers upto %d = %d",n,sum);
return 0;
}
