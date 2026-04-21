#include<stdio.h>
void main(){
    int m1,m2,m3,total;
    float percentage;
    m1=75;
    m2=83;
    m3=78;
    total=m1+m2+m3;
    printf("%d\n",total);
    percentage=total*100/300;
    printf("%f",percentage);
}