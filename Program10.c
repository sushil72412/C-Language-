/*if a five digit number is input through keyboard write a program to evalute sum of its digits.*/
#include<stdio.h>
void main(){
    long int n;
    int d1,d2,d3,d4,d5,sum;
    printf("Enter a five digit number");
    scanf("%ld",&n);
    d1=n%10;
    d2=(n/10)%10;
    d3=(n/100)%10;
    d4=(n/1000)%10;
    d5=(n/10000)%10;
    sum=d1+d2+d3+d4+d5;
    printf("%d",sum);
}
