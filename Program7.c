/*write a program to take input of length and breadth of a rectangle, then determine area & perimeter(pm).
Also, if radius of a circle is input through keyboard, Evalute its area &circumference. */
#include<stdio.h>
void main(){
    int l,b,r,pm;
    float ar,cr;
    printf("Enter the value of length");
    scanf("%d",&l);
    printf("Enter the value of breadth");
    scanf("%d",&b);
    ar=l*b;
    printf("%f\n",ar);
    pm=2*(l+b);
    printf("%d\n",pm);
    printf("Enter radius");
    scanf("%d",&r);
    ar=3.14*r*r;
    cr=2*3.14*r;
    printf("%f\n",ar);
    printf("%f\n",cr);
}