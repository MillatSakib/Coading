#include<stdio.h>
int main(){
    int a,arr[50],i=0;
    printf("Please enter a Decimal digit: ");
    scanf("%d",&a);
    while(a!=0){
        arr[i]=a%2;
        a=a/2;
        i++;
    }
    printf("The binary number are: ");
    while(i!=0){
        i--;
        printf("%d",arr[i]);
    }
return 0;
}
