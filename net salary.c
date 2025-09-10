#include<stdio.h>
int main () {
float N,G,D;
// N is the Net sales, G is the Gross sales, and D is the Discount
printf("ENTER GROSS SALES:");
scanf("%f",&G);
D=0.1*G;
N=G-D;
printf("Discount=%f\n",D);
printf("Net Sales=%f",N);
return 0;
}
