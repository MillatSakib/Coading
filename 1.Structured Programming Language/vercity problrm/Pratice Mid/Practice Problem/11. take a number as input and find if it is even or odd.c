//11.-> take a number as input and find if it is even or odd
#include <stdio.h>
int main(){
    int a;
    printf("Please Enter a number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("This is even");
    else
        printf("This is odd");
    return 0;
}
