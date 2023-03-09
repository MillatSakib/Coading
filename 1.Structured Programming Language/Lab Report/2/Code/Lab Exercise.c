//Write a C Program to Calculate Area of a Square, take length of one side as user input
#include <stdio.h>
int main(){
    double a,b;
    printf("Please enter the the lenth on one side of square: ");
    scanf("%lf",&a);
    b=a*a;
    printf("The area of square is %.3lf",b);
    return 0;
}
