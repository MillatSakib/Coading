//9.-> findout the sum of digits of a number (2 digits or 3 digits)
#include <stdio.h>
int main(){
    int a,b,c=0;
    printf("Please enter a number: ");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        c=c+b;
        a=a/10;
    }
    printf("The summission is %d",c);
    return 0;
}
