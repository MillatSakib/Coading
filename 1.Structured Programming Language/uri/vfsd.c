#include <stdio.h>
int main(){
    double  i=1;
    double j=7;
    double m=3;
    double mm;

    double ab;
    for(i=1;i<=3.2;i=i+.2){
        for(j=m-2;j<=m+.2;j=j+1){
                int a=i;
                ab=(i/a);
                printf("%lf\n",ab);
                int am=j;

                mm=(j/am);
                printf("%lf\n",mm);

                /*if(ab>1 && mm>1){
            printf("I=%.1f J=%.1f\n",i-1,j);
                }
                 else if(ab>1 && mm==1){
            printf("I=%.1f J=%.0f\n",i-1,j);
                }
                else if(ab==1 && mm>1){
            printf("I=%.0f J=%.1f\n",i-1,j);
                }
                else if(ab==1 && mm==1){
            printf("I=%.0f J=%.0f\n",i-1,j);
                }*/
        }
        m=m+.2;
    }

}

