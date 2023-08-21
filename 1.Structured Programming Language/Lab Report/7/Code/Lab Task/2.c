#include <stdio.h>
int perfect_number(int check)
{
    int sum=0;

    for(int i=1;i<check;i++){
        if(check%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int a,b,rcheck;
    printf("Please enter intervel for find out perfect number: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        int temp;
        temp=a;a=b;
        b=temp;
    }
    for(int i=a;i<=b;i++){
        rcheck=perfect_number(i);
        if(rcheck==i){
            printf("%d,",i);
        }
    }
    printf(" is perfect number/s.");
    return 0;
}
