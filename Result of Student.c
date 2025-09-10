#include<stdio.h>
int main()
{
 float a,b,c,A,T;
 printf("Enter marks of first subject:");
 scanf("%f",&a);
 printf("Enter marks of second subject:");
 scanf("%f",&b);
 printf("Enter marks of third subject:");
 scanf("%f",&c);
 T = a + b + c;
 A = T/3;
 if (a<35 || b<35 || c<35)
 {
 printf("Total = %f\n",T);
 printf("Average = %f\n",A);
 printf("Result:- Student Fail");
 }
 else
 {
 printf("Total = %f\n",T);
 printf("Average =%f\n",A);
 if (A>=70)
 {
 printf("Grade: Distinction\n");
 }
 else if (A>=60)
 {
 printf("Grade: First\n");
 }
 else if (A>=50)
 {
 printf("Grade: Second\n");
 }
 else if(A>=35)
 {
 printf("Grade: Third");
 }
 }
return 0;
}
