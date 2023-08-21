//Write a C program to enter temperature in Fahrenheit and convert it into Celsius
#include <stdio.h>
int main(){
    double temp;   //temp mean input temperature
    double conf;    //conc mean converted temperature
    printf("Please enter the temperature in Fahrenheit: ");
    scanf("%lf",&temp);
    conf=(temp-32)*((float)5/9);
    printf("%.3lf F is Equal to %.3lf C",temp,conf);
    return 0;
}

