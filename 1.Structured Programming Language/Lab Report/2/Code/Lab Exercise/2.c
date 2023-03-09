//Write a C program to enter temperature in °Celsius and convert it into °Fahrenheit.
#include <stdio.h>
int main(){
    double temp;  //temp mean input temperature
    double conc;   //conc mean converted temperature
    printf("Please enter the temperature in Celsius: ");
    scanf("%lf",&conc);
    temp=(conc*((float)9/5))+32;
    printf("%.3lf F is Equal to %.3lf C",temp,conc);
    return 0;
}
