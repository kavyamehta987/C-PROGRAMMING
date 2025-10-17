#include<stdio.h>
int main()
{
 char str[100];
 int l = 0;
 printf("Enter a string : ");
 gets(str);
 while(str[l] != '\0')
 {
  l++;
 }
 printf("Length of the string = %d\n",l);
 return 0;
}
