//reverse an integer number
#include <stdio.h>
int power(int a,int b){
    int c = 1;
    for(int i=1; i<=b; i++){
        c = c*a;
    }
    return c;
}
int main(){
    int a=0;
    int b;
    int c=0;
    int x,i,d;
    scanf("%d",&a);
    d=a;
    for(x=0;a!=0;){
        b=a%10;

        a/=10;
        x++;
    }
    i=x;
    for(;i>0;){
        b=d%10;
        i=i-1;
        c=c+(b*(power(10,i)));
        d/=10;
    }
printf("Value of poweer is %d\n",c);
return 0;
}
