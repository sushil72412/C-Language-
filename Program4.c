/*W.A.P. in c to evaluate simple interest.
if principal=1000
rate=4
time=3*/
#include<stdio.h>
void main(){
    int p,r,t,si;
    p=1000;
    r=4;
    t=3;
    si=(p*r*t)/100;
    printf("%d",si);
}