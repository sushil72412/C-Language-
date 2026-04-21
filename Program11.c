/*if a four digit no. is input through keyboard write a c program to evalute sum of its 1st and last digit.*/
#include<stdio.h>
void main(){
    int n,d1,d4,sum;
    printf("Enter a four digit number");
    scanf("%d",&n);
    d1=n%10;
    d4=(n/1000)%10;
    sum=d1+d4;
    printf("%d",sum);
}