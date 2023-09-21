#include <stdio.h>
int main(){
    float a[5];
    int x;
    int b=0;
    int c;
    for(x=0;x<=5;x++){
        scanf("%f", &a[x]);
        printf("%f\n",a[x]);
    }


    for(c=0;c<=5;c++){
        if(a[c]>0){
            b++;
        }

    }
    printf("%d valores positivos\n",b);
    return 0;
}
