#include<stdio.h>
int main(){
float a,b,c,d;
printf("ENTER BYTES: ");
scanf("%f",&a);
b=a/1024;
printf("Kilo Bytes = %f\n",b);
c=b/1024;
printf("Mega Bytes = %f\n",c);
d=c/1024;
printf("Giga Bytes = %f",d);
return 0;
}
