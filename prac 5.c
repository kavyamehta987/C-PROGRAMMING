#include<stdio.h>
int main (){
float a,b,c;
printf("ENTER TWO NUMBERS: ");
scanf("%f%f", &a,&b);
c=a+b;
printf("Addition = %f\n",c);
c=a-b;
printf("Subtraction = %f\n",c);
c=a*b;
printf("Multiplication = %f\n",c);
c=a/b;
printf("Division = %f\n",c);
return 0;
}
