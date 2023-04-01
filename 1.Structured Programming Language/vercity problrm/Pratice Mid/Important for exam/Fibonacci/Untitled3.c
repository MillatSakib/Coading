#include <stdio.h>
int  main(){
    int a,b=1,c=0,d=0;
    printf("N=");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("%d ",d);
        d=b+c;
        b=c;
        c=d;
    }
    return 0;
}
