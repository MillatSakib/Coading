#include <stdio.h>
int main(){
    int t,t1,mihai,bianca;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        mihai=0,bianca=0;
        scanf("%d",&t1);
        for(int j=0;j<t1;j++){
            int temp;
            scanf("%d",&temp);
            if((temp%2)==0){
                mihai+=temp;
            }
            if((temp%2)!=0){
                bianca+=temp;
            }
        }
        //printf("%d %d ",mihai,bianca);
        if(mihai>bianca){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}