//Write a C program to enter a number and print its digit in reverse order.
#include <stdio.h>
int main(){
    int a;
    printf("Please enter a number for reverse it: ");
    scanf("%d",&a);
    int b;
    for(int i=a;a!=0;i==i){
          b=a%10;
          printf("%d",b);
          a=a/10;

    }
}
