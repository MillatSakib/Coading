//Programme for findout a integer number is palidom or not....

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
    int x,i,d,e;
    scanf("%d",&a);
    e=d=a;
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
        if(e==c){
            printf("%d is a Palindrome Number..",e);
        }
        else{
            printf("%d isn't a Palindrome Number..",e);
        }
return 0;
}

