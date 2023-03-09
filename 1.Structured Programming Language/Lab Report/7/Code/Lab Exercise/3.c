//Write a C Program to print Strong Numbers between given interval using function.
#include <stdio.h>
int strong_number(int i){
    int rem,sum=0;
    while(i>0){
        rem=i%10;
        i/=10;
        sum+=factorial(rem);
    }
    return sum;

}
int factorial(int i){
    int fact=1;
    for(int j=1;j<=i;j++){
       fact*=j;
    }
    return fact;
}
int main(){
    int a,b,check;
    printf("Please enter interval for findout all Strong number: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        check=strong_number(i);
        if(check==i){
            printf("%d is a Strong Number\n",i);
        }
    }
}
