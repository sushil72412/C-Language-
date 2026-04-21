/*W.A.P. in c to evalute simple interest*/
#include<stdio.h>
void main(){
     int p,r,t,si;
    printf("Enter principal");
    scanf("%d",&p);
    printf("Enter rate");
    scanf("%d",&r);
    printf("Enter time");
    scanf("%d",&t);
    si=(p*r*t)/100;
    printf("%d",si);
}