//7.-> take two numbers as input divide them and find out quotient and remainder
#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a/b;
    d=a%b;
    printf("Quotent is %d\nRemainder is %d",c,d);
    return 0;
}
