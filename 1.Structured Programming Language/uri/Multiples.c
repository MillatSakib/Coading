#include <stdio.h>
int main(){
    int a,c,b,d;
    scanf("%d %d",&a,&b);
    c=b%a;
    d=a%b;
    if(c==0||d==0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
}
