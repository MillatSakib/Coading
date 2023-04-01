//10.-> Swap two variables
#include <stdio.h>
int main(){
    int a,b;
    printf("Please enter two value for swap:  ");
    scanf("%d %d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The swaped value is %d %d",a,b);
    return 0;
}
