#include<stdio.h>
int main () {
float N,G,A,D;
// N is the Net Salary, G is the Gross salary, A is the Allowance and D is the Deduction
printf("ENTER THE GROSS SALARY:");
scanf("%f",&G);
A=0.1*G;
D=0.03*G;
N=G-8A-D;
printf("Allowance=%f\n",A);
printf("Deduction=%f\n",D);
printf("Net Salary=%f",N);
return 0;
}
