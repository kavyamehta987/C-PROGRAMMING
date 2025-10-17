#include<stdio.h>
#include<string.h>
int main()
{
 char str[100];
 int i = 0;
 printf("Enter a string: ");
 gets(str);
 strlwr(str);
 printf("String in lowercase: %s\n",str);
 return 0;
}
