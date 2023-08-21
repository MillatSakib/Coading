//Write a C program to check whether a number is divisible by 5 and 11 or not.
#include <stdio.h>
int main(){
    int a;
    printf("Please enter a Numbe to check the number is divisible by 5 and 11: ");
    scanf("%d",&a);
    if((a%5==0)&&(a%11==0)){
        printf("This number is divisible by 5 and 11.\n");
    }
    else {
        printf("This number is not divisible by 5 and 11.\n");
    }
    return 0;
}
