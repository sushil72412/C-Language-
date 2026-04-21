#include<stdio.h>
void main(){
    long int n;
    int d1,d2,d3,d4,d5,r1,r2,r3,r4,r5,sum;
    printf("Enter a five digit number=");
    scanf("%ld",&n);
    d1=n%10;
    r1=d1+1;
    d2=(n/10)%10;
    r2=d2+1;
    d3=(n/100)%10;
    r3=d3+1;
    d4=(n/1000)%10;
    r4=d4+1;
    d5=(n/10000)%10;
    r5=d5+1;
    sum=(r5+1)*10000+(r4+1)*1000+(r3+1)*100+(r2+1)*10+(r1+1);
    printf("%d",sum);

}