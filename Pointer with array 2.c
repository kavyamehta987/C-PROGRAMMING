#include<stdio.h>
int main()
{
 int n,i;
 printf("Enter the size of an array: ");
 scanf("%d",&n);
 int a[n];
 for(i = 0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Values of array using pointer: \n");
 int *p = &a[0];
 for(i = 0;i < n;i++)
 {
  printf("%d\n",*p);
  p++;
 }
 return 0;
}
