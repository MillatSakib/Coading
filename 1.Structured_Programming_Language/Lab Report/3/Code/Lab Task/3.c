// Write a C program to check whether a given number is odd or even.
#include <stdio.h>
int main(){
    int a;
    printf("Please enter a nuber for checking the number is odd or even:");
    scanf("%d",&a);
    if(a%2==0){
    printf("This Number is even\n");
    }
    else{
        printf("This Number odd\n");
    }
    return 0;
}
