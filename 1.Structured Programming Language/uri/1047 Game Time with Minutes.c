#include <stdio.h>
int main(){
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    /*if(a<c){
    e=(24-a)+c;
    if()
    }*/
    if(b<d){

            e=d-b;
    }
    else if(b>d){
        c=c-1;
        e=((60+d)-b);
    }
    else{
        e=0;
    }

    if(a==c && b>d ){
         f=c-a;


    }
    else if(a>=c){
         f=(24-a)+c;


    }


    else{

            f=c-a;

    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",f,e);
}
