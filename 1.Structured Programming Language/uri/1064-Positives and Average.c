#include <stdio.h>

int main(){

    float a[6];
    float d[6];
    int f=0,b=0,c,x;
    for(x=0;x<=5;x++){
        scanf("%f", &a[x]);
    }
    for(c=0;c<=5;c++){
        if(a[c]>0){
            d[f]=a[c];
            b++;
            f++;

        }

    }
    printf("%d valores positivos\n",b);
    float avg,sum=0;
    for(c=0;c<b;c++)
    {
       sum=sum+d[c];
    }
    avg=sum/b;
    printf("%.1f\n",avg);
    return 0;
}
