/* if two values are input at two different location C and D.
write a Program in "c" to interchanging its value.*/
#include<stdio.h>
void main(){
    int c,d,temp;
    printf("Enter two values");
    scanf("%d%d",&c,&d);
    temp=c;
    c=d;
    d=temp;
    printf("%d\n%d",c,d);

}