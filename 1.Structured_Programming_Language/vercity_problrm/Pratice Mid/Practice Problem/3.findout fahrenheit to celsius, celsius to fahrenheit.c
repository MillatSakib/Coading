//findout fahrenheit to celsius, celsius to fahrenheit
#include <stdio.h>
int main(){
    char x;
    float a,b,c;
    printf("If you want to convert the Temp F->C press F and if you want to convert to C->F press C");
    scanf("%c",&x);

    if ((x=='f')||(x=='F')){
            printf("Please enter the value in farenheight");
            scanf("%d",&a);
            c=(a−32)*(5/9);
            printf("In Celsius the Temp is %d",c);
    }

    else if ((x=='c')||(x=='C')){
        scanf("%d",&a);
            c=((9/5)*(a))+32;

    }
}
