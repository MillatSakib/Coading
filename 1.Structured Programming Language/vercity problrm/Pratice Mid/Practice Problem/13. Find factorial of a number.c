//13.-> Find factorial of a number
#include<stdio.h>
int main(){
    int a;
    long int b=1;
    printf("Plese enter a number for findout the Factorial: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b=b*i;
    }
    printf("The factorial of %d is %ld",a,b);
    return 0;
}
