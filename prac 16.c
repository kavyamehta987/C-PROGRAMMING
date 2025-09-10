#include<stdio.h>
int main () {
float I,P,R,N;
// I is Interest, P is Principal Amount, R is Rate of Interest and N is the time
printf("ENTER PRINCIPAL AMOUNT:");
scanf("%f",&P);
printf("ENTER RATE OF AMOUNT:");
scanf("%f",&R);
printf("ENTER TIME:");
scanf("%f",&N);
I=P*R*N;
printf("Interest=%f",I);
return 0;
}
