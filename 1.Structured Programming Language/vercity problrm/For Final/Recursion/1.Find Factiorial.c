#include <stdio.h>
int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }

}
int main(){
    int n;
    printf("Please enter a value for find out factorial: ");
    scanf("%d",&n);
    printf("The value of %d! is %d.",n,factorial(n));
    return 0;

}
