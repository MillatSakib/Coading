#include <stdio.h>
int main (){
    int N,K,count=0;
    scanf("%d %d",&N,&K);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(i==j){
                continue;
            }
            else{
                if(arr[i]+arr[j]==K){
                    count++;

                }
            }
        }
    }

    printf("%d",count);
    return 0;

}
