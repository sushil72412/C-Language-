/*If the total selling price of 15 items and total profit earned on them is input 
through the keyboard, W.A.P to find the cost price of one iteam.*/
#include<stdio.h>
void main(){
    int cp,sp,profit;
    float cpooi;
    printf("Enter selling price of 15 items=");
    scanf("%d",&sp);
    printf("Enter total profit=");
    scanf("%d",&profit);
    cp=sp-profit;
    cpooi=cp/15;
    printf("\ncost price of one iteam=%f",cpooi);
}