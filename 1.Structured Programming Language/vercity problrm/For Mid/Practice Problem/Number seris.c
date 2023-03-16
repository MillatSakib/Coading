#include <stdio.h>
#include <math.h>
int main(){
    int a,b,j,count=1,ok=0,spc,space,i,k;
    printf("Please enter an odd Number: ");
    scanf("%d",&a);
    b=(a/2)+1;
    spc=a;
    for(i=0;i<a;i++){
            for(space=0;space<spc;space++){
                printf(" ");

            }
        for(j=1;j<=count;j++){
            printf("%d ",j);
        }
        for(k=count-1; k>0;k--){
            printf("%d ",k);
        }
        printf("\n");
        if(!ok){
                 spc-=2;
                if(count==b){
                    ok=1;
                    count--;
                    spc+=4;
                    continue;
                }
            count++;


        }
        else{
            count--;
            spc+=2;
        }
    }
    return 0;
}
