#include <stdio.h>
int main(){
    int a,b,y=0,c,d,e;
    scanf("%d %d",&a,&b);
    c=(a/b);
    printf("%d\n",c);
    d=(c-1)*b;
    printf("%d\n",d);
    e=a-(d+d);
    printf("%d\n",e);

    }
