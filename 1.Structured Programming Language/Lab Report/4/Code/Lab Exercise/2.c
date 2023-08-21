//Write a C program to find sum of first and last digit of any number.
#include <stdio.h>
int main(){
    int a,b,c=0,d;
    printf("Please enter a nuber for swaping first & last digit: ");
    scanf("%d",&a);
    b=a%10;
    for(int i=a;a/10!=0;i=i){
        a=a/10;
    }
    d=b+a;
    printf("The summission of first number(%d) and last number(%d) is %d",a,b,d);
}
