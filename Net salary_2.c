#include<stdio.h>
void main()
{
 float g,a,d;
 printf("Enter Gross Salary:");
 scanf("%f", &g);
 if (g>10000)
 {
  a=0.1*g;
  d=0.03*g;
  printf("The Net Salary = %f\n",g + a - d);
 }
 else if(g>5000)
 {
  a=0.07*g;
  d=0.02*g;
  printf("The Net Salary = %f\n",g + a - d);
 }
 printf("Given Allowances=%f\n",a);
 printf("Diduction=%f",d);
}
