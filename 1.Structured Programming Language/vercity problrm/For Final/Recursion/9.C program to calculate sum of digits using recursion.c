#include <stdio.h>

int sum_of_digit(int a){
    if(a>0){
        return (a%10)+(sum_of_digit(a/10));
    }
    else{
        return 0;
    }

}

int main(){
    int a;
    printf("Please enter a Number: ");
    scanf("%d",&a);
    printf("The summision of all digit of this number is %d",sum_of_digit(a));
    return 0;

}
