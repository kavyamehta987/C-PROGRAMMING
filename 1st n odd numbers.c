#include<stdio.h>
int main()
{
 int i,n;
 printf("Enter any number:");
 scanf("%d",&n);
 printf("Odd Numbers Upto %d:\n",n);
 for(i = 1;i<=n;i=i+2)
 {
  printf("%d\t",i);
  if(i%10 == 0)
  {
   printf("\n");
  }
 }
return 0;
}
