#include <stdio.h>
#include <math.h>
int main(){
    double A,B,C,D,E,F;
    scanf("%lf %lf %lf",&A,&B,&C);
    D=(((B*B)-(4*A*C)));
    if(A!=0 && D>0){
    E=(((-B)+sqrt(D))/(2*A));
    F=(((-B)-sqrt(D))/(2*A));
    printf("R1 = %.5lf\nR2 = %.5lf\n",E,F);
    }
    else{
        printf("Impossivel calcular\n");
    }

}
