#include <stdio.h>
int main(){
    double a,b,avg;
    int novo_cal;
    invalid1:
    scanf("%lf",&a);
    if(a<0 || a>10){
        printf("nota invalida\n");
        goto invalid1;
    }
    invalid2:
    scanf("%lf",&b);
    if(b<0 || b>10){
        printf("nota invalida\n");
        goto invalid2;
    }
    avg=(a+b)/2;
    printf("media = %.2lf\n",avg);
    new_cal:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&novo_cal);
    if(novo_cal<1 || novo_cal>2){
        goto new_cal;
    }else if(novo_cal==1){
            goto invalid1;
    }else if(novo_cal==2){
       return 0;
    }
return 0;

}