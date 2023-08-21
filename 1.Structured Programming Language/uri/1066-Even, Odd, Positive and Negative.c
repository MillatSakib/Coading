#include <stdio.h>
int main(){
    int a[5];
    int even=0,odd=0,pos=0,neg=0;
    for(int x=0;x<5;x++){
        scanf("%d",&a[x]);
    }
    for(int x=0;x<5;x++){
    if(a[x]<0){
        neg++;
    }
    else if(a[x]>0){
      pos++;
    }

    if(a[x]%2==0){
        even ++;
    }

    else if(a[x]%2!=0){
        odd++;
    }

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);
return 0;
}
