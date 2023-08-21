/*Write a C Program to input two numbers
as input and display its product.*/
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("%d * %d = %d\n",a,b,c);
    return 0;
}
