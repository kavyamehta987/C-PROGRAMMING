#include<stdio.h>
void main(){
int g,d;
printf("Enter Gross Value");
scanf("%d", &g);
if (g>20000) {
d=0.15*g;
printf("%d is the net sales",g - d);}
else
if (g>10000) {
d=0.1*g;
printf("%d is the net sales",g - d);}
else {
d=0.05*g;
printf("%d is the net sales",g - d);}
return 0;
}
