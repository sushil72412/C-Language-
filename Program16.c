/*A cashier hai currency notes of denomination 10,50,and 100. if the ammount to be withdrawn is 
input through the keyboard in hundreds, find the total number if currency notes of each denomination 
the cashier will have to give to the withdrawer */
#include<stdio.h>
void main(){
    int n,a,b,c,d,e,f;
    printf("Enter the currency in hundreds=");
    scanf("%d",&n);
    a=n/100;
    b=n%100;
    printf("\nHundred notes is=%d",a);
    c=b/50;
    d=b%50;
    printf("\nFifty notes is=%d",c);
    e=d/10;
    f=d%10;
    printf("\nTen notes is=%d",e);
}