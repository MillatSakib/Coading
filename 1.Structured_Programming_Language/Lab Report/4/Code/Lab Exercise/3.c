//Write a C program to calculate product of digits of any number.
#include<stdio.h>
int main(){
    int a,b=1,c;
    printf("Please Enter a Number: ");
    scanf("%d",&a);
    while (a!=0){
        c=a%10;
        b*=c;
        a/=10;
    }
    printf("The product of the numbers digit %d",b);
    return 0;
}
