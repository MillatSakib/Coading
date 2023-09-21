#include <stdio.h>
int main(){
    int k=7;
    int j=7;
    for(int i=1;i<10;i=i+2){
        for(j=k;j>k-3;j=j-1){
            printf("I=%d J=%d\n",i,j);
        }
        k=k+2;
    }

}
