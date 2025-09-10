#include<stdio.h>
int main()
{
int n;
 printf("Enter any number:");
 scanf("%d",&n);
 printf("1st %d Natural Numbers:\n",n);
 for(int i = 1;i<=n;i++)
 {
  printf("%d\t",i);
  if(i%10 == 0)
  {
   printf("\n");
  }
 }
return 0;
}
