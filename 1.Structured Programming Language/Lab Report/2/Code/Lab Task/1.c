//Write a C program to enter two numbers and perform all arithmetic operations
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("The summission of %d & %d is %d.\n",a,b,c);
    c=a-b;
    printf("The substraction of %d & %d is %d.\n",a,b,c);
    c=a*b;
    printf("The product of %d & %d is %d.\n",a,b,c);
    c=a/b;
    printf("The division of %d & %d is %d.\n",a,b,c);
    c=a%b;
    printf("The modulus of %d & %d is %d.\n",a,b,c);
    return 0;
}
