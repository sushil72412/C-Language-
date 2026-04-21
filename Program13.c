/*The distance b/w two cities(in km.) is input through the keyboard. W.A.P in "C" to convert and
print this distance in meters,feet,inches,centimeter.*/
#include<stdio.h>
void main(){
    float meter,feet,inches,centimeter,km;
    printf("Enter distance b/w to points in km:-");
    scanf("%f",&km);
    meter=1000*km;
    feet=km*3280.84;
    inches=km*39370.08;
    centimeter=100000*km;
    printf("\nDistance in meter=%f",meter);
    printf("\nDistance in feet=%f",feet);
    printf("\nDistance in inches=%f",inches);
    printf("\nDistance in centimeter=%f",centimeter);
}