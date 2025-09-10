#include<stdio.h>
int main() {
float L,B,A,P;
printf("ENTER THE LENGTH OF RECTANGLE:");
scanf("%f",&L);
printf("ENTER THE WIDTH OF RECTANGLE:");
scanf("%f",&B);
A=L*B;
P=2*(L+B);
printf("AREA=%f\n",A);
printf("PERIMETER=%f",P);
return 0;
}
