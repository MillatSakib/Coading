//Write a C program to calculate sum of all digits of a number using recursion.
#include <stdio.h>
int digit_sum(int sum){
    if(sum!=0)
        return (sum%10)+digit_sum(sum/10);
    else
        return 0;
}
int main(){
    int a,sum;
    printf("Please enter a numeber: ");
    scanf("%d",&a);
    sum=digit_sum(a);
    printf("The sum of all digit of %d is %d",a,sum);
    return 0;
}
