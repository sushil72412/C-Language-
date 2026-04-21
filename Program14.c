// /*Temperature of a city in fahrenheit degrees is input through the keyboard, W.A.P to convert this temperature into 
// centigrade degrees.*/
// #include<stdio.h>
// void main(){
// float far,cel;
// printf("Enter farenheight value: ");
// scanf("%f",&far);
// cel = (far-32)*5/9;
// printf("Celcius value=%f",cel);
// }


/*. Write a program to convert temperature from degree centigrade to Fahrenheit. °F = °C*9/5+32*/

#include<stdio.h>
int main(){
    float F, C;
    printf("Name: Sushil Kumar\n");
    printf("Enter degree centigrade: ");
    scanf("%f",&C);
    F = C*9/5+32;
    printf("Fahrenheit Value is: %f ",F);
    return 0;
}