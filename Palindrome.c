#include<stdio.h>
int main()
{
 int n,r=0,o,a,c=0;
 printf("Enter any number:");
 scanf("%d",&n);
 o=n;
 while(n!=0)
 {
  a=n%10;
  r=r*10 +a;
  n/=10;
  c=c+1;
  printf("After %d iteration number is %d and reverse is %d\n",c,n,r);
 }
 if(o=r)
 {
  printf("Given number %d is a Palindrome",o);
 }
 else
 {
  printf("Given number %d is not a Palindrome",o);
 }
 return 0;
}
