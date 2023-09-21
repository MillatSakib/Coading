#include <stdio.h>
int main(){
    int a,b,y=0,c,d;
    scanf("%d %d",&a,&b);

    {
        if(a<0){
           c=a*(-1);
        }
        else {
            c=a;
        }
        if(b<0){
            d=b*(-1);

        }
        else{
            d=b;
        }
    }
    printf("%d %d",c,d);

    if(a<b){
    for(int x=a;x<=b;x++){
        if(c%2!=0){
         y=y+a;

        }
        a++;
    }
    }

       else if(b<a){
    for(int x=(b+1);x<=a;x++){
        if(d%2!=0){
         y=y+b;

        }
        b++;
    }
    }
    printf("\n%d\n",y);
  return 0;
}
