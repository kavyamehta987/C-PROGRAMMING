#include<stdio.h>
int main()
{
 int n,sum=0;
 printf("Enter any number:");
 scanf("%d",&n);
 for(int i=1;i<=n;i=i+1)
  {
   sum+=i;

  }
  printf("%d",sum);
return 0;
}
