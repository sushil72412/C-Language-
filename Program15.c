/*In a Town the percentage of men is 52. The percentage of total literacy is 48.If total percentage of literate men
is 35 of total population. W.A.P. in "C" to find the total number of illiterate men and women if the population 
of town is 80000.*/
#include<stdio.h>
void main(){
    float po,m,w,l,lm,lw,ilm,ilw;
    printf("\nEnter the population of Town=");
    scanf("%f",&po);
    m=(po*52)/100;
    w=po-m;
    l=(po*48)/100;
    lm=(po*35)/100;
    lw=l-lm;
    ilm=m-lm;
    ilw=w-lw;
    printf("\nnumber of illiterate men=%.0f",ilm);
    printf("\nnumber of illiterate women=%.0f",ilw);
}