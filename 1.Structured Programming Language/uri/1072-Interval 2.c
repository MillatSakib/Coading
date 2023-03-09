#include <stdio.h>
int main(){
    int a,c=0,d=0;
    scanf("%d",&a);
    int b[a];
    for(int x=0;x<a;x++){
    scanf("%d",&b[x]);
    if(b[x]>=10 && b[x]<=20){
        c++;
    }
    else{
        d++;
    }
    }
    printf("%d in\n%d out\n",c,d);
    return 0;
}
