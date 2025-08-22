#include<stdio.h>

    int main()
    {
    int x,y,z;
    printf("Enter three values");
    scanf("%d%d%d",&x,&y,&z);

    if(x>y && x>z){
    printf("%d is the largest number",x);}
    else
    if(y>x && y>z){
    printf("%d is the largest number",y);}
    else
    if(z>x && z>y){
    printf("%d is the largest number",z);}

    if(x<y && x<z){
    printf("%d is the smallest number",x);}
    else
    if(y<x && y<z){
    printf("%d is the smallest number",y);}
    else
    if(z<x && z<y){
    printf("%d is the smallest number",z);}

    return 0;

    }


