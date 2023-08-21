#include <stdio.h>
#include <math.h>

int rev_print(int a,int c){
    if(a!=0){
        return ((a%10)*(pow(10,c)))+rev_print(a/10,c-1);
    }
    else{
        return 0;
    }
}

int main(){
    int a,b,c=-1,d;
    printf("Please enter a Number for cheking Palindrom: ");
    scanf("%d",&a);
    d=a;
    while(d!=0){
        d/=10;
        c++;
    }

    b=rev_print(a,c);
    printf("The reverse number is %d",b);
    return 0;
}

