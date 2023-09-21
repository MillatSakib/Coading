#include <stdio.h>
int main(){
    float a,b;
    scanf("%f",&a);
    if(a>=0.00 && a<=2000.00){
            printf("Isento\n");

    }
    else if(a>=2000.01 && a<=3000.00){
        b=((a-2000.00)/100)*8;
    printf("R$ %.2f\n",b);


    }

    else if(a>=3000.01 && a<=4500.00){
        b=(((1000/100)*8)+((a-3000)/100)*18);
    printf("R$ %.2f\n",b);
    }
    else if(a>4500.00){
        b=(((1000/100)*8)+((1500/100)*18)+((a-4500)/100)*28);
    printf("R$ %.2f\n",b);
    }
    return 0;
}
