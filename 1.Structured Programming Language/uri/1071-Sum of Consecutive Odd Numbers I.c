#include <stdio.h>
int main(){
    int a,b,min,max,c,sum=0,d;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        min=a;
        max=b;

    }
    else if(a>b)
    {
        min=b;
        max=a;

    }
    d=min;
    //printf("Minumum %d Maximum %d\n",min,max);
    for(c=min+1;c<max;c++){
        if(c%2!=0){
           sum=sum+c;

        }
       // printf("The modulus of %d is %d\n",c,c%2);
    }
    printf("%d\n",sum);
    return 0;
}
