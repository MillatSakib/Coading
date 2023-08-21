#include <stdio.h>
int main(){
    int a=0;
    double b,c,d,e;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%lf %lf %lf",&b,&c,&d);
        e=(((b*2)+(c*3)+(d*5))/(10.0));
        printf("%.1lf",e);
    }
    return 0;
}
