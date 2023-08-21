#include <stdio.h>
int main(){
    int ab,c=1;
    scanf("%d",&ab);
    for(int x=0;x<ab;x++){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b){
            if(a/b>1){
    for(int x=a;x!=0 && x>b;x=x-b){
    c++;
   // printf("%d\n",x);
    }

    }
    else{
            c=-1;
     //printf("-1\n");
    }


    }

   else if(a<b){
       // printf("-1\n");
       c=-1;
    }
    if(a==0){
        c=0;
    }
     printf("%d\n",c);
     c=1;
    }

    return 0;
}
