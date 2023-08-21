#include <stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    for(int i=1;i<11;i++){
        c=a*i;
        printf("%d x %d = %d\n",i,a,c);
    }
}

