#include <stdio.h>
#include <string.h>
int power(int n,int j){
    if(j<=0){
        return 1;
    }
    else{
        return n*power(n,j-1);
    }
}
int main(){
    int a,b;
    int pow;
    printf("Please enter a number for findout power: ");
    scanf("%d %d",&a,&b);
    pow=power(a,b);
    printf("The value of %d^%d is %d",a,b,pow);
    return 0;
}