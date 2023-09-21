#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    if(a>=b){
         c=(24-a)+b;
         printf("O JOGO DUROU %d HORA(S)\n",c);
    }

    else{
            c=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
}
