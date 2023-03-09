/*Write a C Program to input two float
numbers as input and display its sum [Follow
the printing style of problem 5].*/
#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f",&a,&b);
    c=a+b;
    printf("%f + %f = %f\n",a,b,c);
    return 0;
}
