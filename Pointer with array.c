#include<stdio.h>
int main()
{
 int i, a[3] = {1,2,3};
 int *p;
 p = &a[0];
 for(i = 0; i < 3; i++)
 {
  printf("%d\n", p);
  p++;
 }
 return 0;
}
