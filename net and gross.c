#include<stdio.h>
void main(){
float g,d;
printf("Enter Gross Value:");
scanf("%f", &g);
if (g>20000) {
d=0.15*g;
printf("%f Is The Net Sales\n",g - d);}
else
if (g>10000) {
d=0.1*g;
printf("%f Is The Net sales\n",g - d);}
else {
d=0.05*g;
printf("%f is the net sales",g - d);}
printf("Given Discount=%f",d);
}
