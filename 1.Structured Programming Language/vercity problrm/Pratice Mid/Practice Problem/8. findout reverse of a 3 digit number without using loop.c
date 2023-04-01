//8.-> findout reverse of a 3 digit number without using loop
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("Please Enter a 3 digit number for reverse it: ");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    printf("%d%d%d",b,c,d);
    return 0;
}
