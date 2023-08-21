#include <stdio.h>
int main(){
    int a,b;
    float c,d,e;
    scanf("%d %d",&a,&b);


    if(a==1){
        c=4.00;
    }
    else if(a==2){
        c=4.50;
    }
    else if(a==3){
        c=5.00;
    }
    else if(a==4){
        c=2.00;
    }

    else if(a==5){
        c=1.50;
    }

            //That was first condition

    /*if(b==1){
        c=4.00;
    }
    else if(b==2){
        c=4.50;
    }
    else if(b==3){
        c=5.00;
    }
    else if(b==4){
        c=2.00;
    }

    else if(b==5){
        d=1.50;
    }*/
    e=c*b;
    printf("Total: R$ %.2f\n",e);

}
