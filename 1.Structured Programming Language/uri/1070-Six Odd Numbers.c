#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    if(a%2==0){
        c=a+1;

    }
    else{
        c=a;
    }

    for(b=0;b<=5;b++){
       printf("%d\n",c);
       c=c+2;
    }
}
