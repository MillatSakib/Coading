//. Write a C Program to Calculate Area and Circumference of Circle
#include <stdio.h>
#define PI 3.1416
int main(){
    double a,b;
    printf("Please enter the radius of circle: ");
    scanf("%lf",&a);
    b=PI*(a*a);
    printf("The area of circle is %.3lf",b);
    b=2*PI*a;
    printf(" & the Circumference of Circle are %.3lf",b);
    return 0;

}
