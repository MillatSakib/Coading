#include <stdio.h>
int main(){
    float a,b,c,d;
    scanf("%f %f %f",&a,&b,&c);
    if((a<b+c)&&(b<a+c)&&(c<b+a)){
       d=a+b+c;
       printf("Perimetro = %.1f\n",d);

    }

    else{

        d=(((1.0/2)*c)*(a+b));
        printf("Area = %.1f\n",d);
    }

}
