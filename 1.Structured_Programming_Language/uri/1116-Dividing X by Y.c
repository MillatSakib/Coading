#include <stdio.h>
int main(){
    int a;
    double b,c,d;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%lf %lf",&b,&c);
        if(b==0){
            printf("0.0\n");
        }
        else if(c==0){
            printf("divisao impossivel\n");
        }
        else{
            d=b/c;
            printf("%.1lf\n",d);
        }
    }
}
