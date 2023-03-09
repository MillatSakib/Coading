#include <stdio.h>
int main(){
    int a,b,c,d=0;
     for(int j=0;b>0;j++){
    scanf("%d %d",&a,&b);
    if(a<b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    }
    c=(a+1)-b;
    int xy[c];
   // printf("%d %d %d",a,b,c);

    for(int i=b;i<=a;i++){
            if(b<=0){
                break;
            }
            d=d+i;
            printf("%d ",i);

   }if(b>0){
   printf("Sum=%d\n",d);
   }
   d=0;
   }
}
