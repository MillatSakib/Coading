#include <stdio.h>
#include <math.h>
int main(){
    int x,z,sum;
    scanf("%d",&x);
    loop:
    scanf("%d",&z);
    if(z<=x){
        goto loop;
    }
    else{
        sum=ceil(z/(float)x);
        printf("%d\n",sum);
    }

    return 0;
}