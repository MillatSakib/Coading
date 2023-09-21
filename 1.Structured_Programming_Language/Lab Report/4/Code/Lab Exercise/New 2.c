#include <stdio.h>
int power(int a,int b){
    int c=1;
    for(int i=0;i<b;i++){
        c*=a;
    }
    return c;
}
int main(){
    int a,b,c=0,d=0,e,f,x,y=1;
    printf("Please enter a number for for swaping first and last value: ");
    scanf("%d",&a);
    f=b=a;
    while(a!=0){
        e=b%10;
        a/=10;
        c++;
    }
    x=c;
    while(b!=0){
        c--;
        e=b%10;
        if(c==x-1){
        d=d+(e*power(10,c));
        }
        else if(c==0){
            d=d+(e*power(10,0));
        }
        else{
            d=d+(e*power(10,x-(1+c)));
        y++;
        }
        b/=10;
    }
        printf("The number is %d\n",d);
}
