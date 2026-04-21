/*if a five digit number is input through keyboard.
write a program to make its reverse.*/
#include<stdio.h>
void main(){
    long int n,r1,r2,r3,r4,r5,rev;
    int d1,d2,d3,d4,d5;
    printf("Enter a five digit number");
    scanf("%ld",&n);
    d1=n%10;
    r1=d1*10000;
    d2=(n/10)%10;
    r2=d2*1000;
    d3=(n/100)%10;
    r3=d3*100;
    d4=(n/1000)%10;
    r4=d4*10;
    d5=(n/10000)%10;
    r5=d5*1;
    rev= r1+r2+r3+r4+r5;
    printf("%d",rev);
    
}