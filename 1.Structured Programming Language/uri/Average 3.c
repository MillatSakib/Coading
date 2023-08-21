#include <stdio.h>
int main(){
    float N1,N2,N3,N4,N5,avarage,avarage1;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    avarage=(((N1*2)+(N2*3)+(N3*4)+(N4*1))/(1+2+3+4));
    printf("Media: %.1f\n",avarage);
    if(avarage>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avarage<5){
            printf("Aluno reprovado.\n");

    }
        else if(avarage>=5.0 && avarage<=6.9){
            printf("Aluno em exame.\n");
            scanf("%f",&N5);
            printf("Nota do exame: %.1f\n",N5);
            avarage1=(N5+avarage)/2;
            if(avarage1>=5){
                printf("Aluno aprovado.\n");
            }
            else if(avarage1<=4.9){
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n",avarage1);
        }

}
