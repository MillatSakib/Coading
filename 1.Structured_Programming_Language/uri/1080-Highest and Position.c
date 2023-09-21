#include <stdio.h>
int main(){
    int a[100];
    int m=0,max=-2147483647;
    for(int i=0;i<100;i++){
        scanf("%d",&a[i]);


            if(max>a[i]){
                max=max;
               // m=i+1;
            }
            else{
                max=a[i];
                 //m=i+1;
            }

    }
    for(int i=0;i<100;i++){
    if(max==a[i]){
        m=i+1;
    }
    }

    printf("%d\n%d\n",max,m);
    return 0;
}
